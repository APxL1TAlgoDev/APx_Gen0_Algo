<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="proj" top="algo_unpacked">
    <Simulation argv="test1">
        <SimFlow name="csim" setup="false" optimizeCompile="false" clean="false" ldflags="" mflags=""/>
    </Simulation>
    <includePaths/>
    <libraryFlag/>
    <files>
        <file name="../../data/rnd_out_ref.txt" sc="0" tb="1" cflags="  -Wno-unknown-pragmas"/>
        <file name="../../data/rnd_inp.txt" sc="0" tb="1" cflags="  -Wno-unknown-pragmas"/>
        <file name="../../data/test1_out_ref.txt" sc="0" tb="1" cflags="  -Wno-unknown-pragmas"/>
        <file name="../../data/test1_inp.txt" sc="0" tb="1" cflags="  -Wno-unknown-pragmas"/>
        <file name="../../src/algo_unpacked_tb.cpp" sc="0" tb="1" cflags="  -Wno-unknown-pragmas"/>
        <file name="src/GCT.cc" sc="0" tb="false" cflags=""/>
        <file name="src/algo_unpacked.cpp" sc="0" tb="false" cflags=""/>
    </files>
    <solutions>
        <solution name="solution1" status=""/>
    </solutions>
</AutoPilot:project>

