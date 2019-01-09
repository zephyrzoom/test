import subprocess
import os

package1_dir = 'service'
package2_dir = 'service.impl'
leaf_dir = package2_dir.replace('.', '/')

p = subprocess.Popen(['/Users/zzq7191/Documents/dangban/jadx-0.8.0/bin/jadx', '/Users/zzq7191/Documents/test/py/access-provider-sap.jar'])


# p = subprocess.Popen(['java','-jar','/Users/zzq7191/Documents/provider1/target/provider1-1.0-SNAPSHOT.jar'])