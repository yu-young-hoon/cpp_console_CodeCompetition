using System;
using System.IO;
using System.Text.RegularExpressions;

namespace Solution
{
    public class Solution
    {
        public static void test2()
        {
            // read the string filename
            string filename = @".\TextFile1.txt";//Console.ReadLine();
            string allResponse = System.IO.File.ReadAllText(filename);

            allResponse = allResponse.Replace("\r\n", "\n");
            int count = 0;
            long size = 0;

            Regex regex = new Regex(@"([0-9]+)$", RegexOptions.Multiline);
            MatchCollection regexMatch = regex.Matches(allResponse);
            if (regexMatch != null && regexMatch.Count != 0)
            {
                foreach (Match ma in regexMatch)
                {
                    int byteSize = Int32.Parse(ma.Value);
                    if (byteSize > 5000)
                    {
                        count++;
                        size += byteSize;
                    }
                }
            }

            string filePath = String.Format("bytes_{0}", filename);
            try
            {
                using (StreamWriter streamWriter = new StreamWriter(filePath, false))
                {
                    streamWriter.WriteLine(count);
                    streamWriter.WriteLine(size);
                }
            }
            catch (Exception ex)
            {
                // TODO
            }
        }
    }
}