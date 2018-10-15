{{ ansible_managed|comment }}


require "fileinto";
require "imap4flags";

if anyof (header :contains "X-Spam-Flag" "YES",
          header :is "X-Spam" "Yes") {
  addflag "\\Seen";
  fileinto "Junk";
}
