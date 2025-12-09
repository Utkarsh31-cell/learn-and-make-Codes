Maven & Gradle:

Why do we using Maven or Gradle?

Mavne & Gradle both are build automation tools.

 Maven is mainly used for build java code.
 Gradle is mainly used for build Groovy/Kotlin code.
  
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Build code -> compile -> package -> run 

Manage dependencies -> external libraries 

Deploye artifacts -> .jar and .war files 

Basically it is for standardize project structure and build processes

Why do we need tools like Maven?

-> Without them building a large project manually is painful

-> you'd have to download and manage libraries (like Spring, hibernate) yourself.

-> keep track of version of(librearies example spring, springboot)

-> Compile each java files manually

-> Package the result yourself etc.

[Build Tool => automate everything itself] 

 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

 Maven :

 Maven is java build and dependency management tools which uses XML file called pom.xml.

 pom.xml -> contains list of dependecnies in-built or external whichever we want to add for our use in our project.

 Below is example of pom.xml

 <project>
    <dependencies>
        <dependency>
            <groupId></groupId>
            <artifactId></artifactId>
            <version></version>
        </dependency>
    </dependencies>
</project>


++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Basically groupId used for identifying your project namespace.
And groupId,artifactId and version together give unique identity to a project or full srtifact coordinate.

<groupId>com.example.myapp</groupId>
<artifactId>demo</artifactId>
<version>1.0.0</version>

unique_identity -> com.example.myapp:demo:1.0.0


Creation of new java maven project using Intellij :

using archetype as : maven-archetype-quickstart
=======================================================================================================================
KISS is applied everywhere => cout<<Then only u will understand things;
Downstream vs Upstream Services :   [Basic Terminology Understandings]

So suppose 

I had one service X

and I am using service A endpoints (API) in my service X => so service A is upstream to my service X

and If service B uses my service X endpoints in it's service. Then service B is downstream to my service X 


One line explanation : The consumer (caller) is downstream and the provider (callee) is upstream