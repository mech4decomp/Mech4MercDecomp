/*
 * FUN_00421350 (1389 B) — MLR (MechLab Renderer) graphics library
 * initialization: creates memory pools, registers library option
 * toggles, reads Graphics Options from the registry, and sets default
 * renderer constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- extern data symbols (globals) ---- */
extern int g_00849304;
extern int g_007b9578, g_007b95a4, g_007b9580, g_007b9584, g_007b9588;
extern int g_007b9590, g_007b958c, g_007b9598, g_007b959c, g_007b95a0;
extern int g_007b9594, g_007b957c;
extern int g_007b9560, g_007b955c, g_007b9558, g_007b9554, g_007b9550;
extern char g_007b95a8;
extern int g_007b2210, g_007b221c, g_007b2220, g_007b2228, g_007b222c;
extern int g_007b2230, g_007b2234, g_007b9574;
extern int g_007b94a0, g_007b9490, g_007b9494, g_007b9498, g_007b949c;

/* ---- extern string literals ---- */
extern char g_0076dd20[], g_0076dd0c[], g_0076dd00[], g_0076dcf4[];
extern char g_0076dce0[], g_0076dcd4[], g_0076dcc4[], g_0076dcb8[];
extern char g_0076dcac[], g_0076dca0[], g_0076dc90[], g_0076dc84[];
extern char g_0076dc60[], g_0076dc40[], g_0076dc24[], g_0076dbf0[];
extern char g_0076dbd4[], g_0076dbb0[], g_0076db80[], g_0076db50[];
extern char g_0076db1c[], g_0076daec[], g_0076dabc[], g_0076da8c[];
extern char g_0076da58[], g_0076da2c[], g_0076da00[];
extern char g_0076d9ec[], g_0076d9dc[], g_0076d9cc[], g_0076d9c0[];
extern char g_0076d9b4[], g_0076d9a8[], g_0076d99c[], g_0076d98c[];
extern char g_0076d97c[];

/* ---- extern functions ---- */
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0048fc30(void);
extern void __cdecl FUN_0048f110(void);
extern void __cdecl FUN_0048bd40(void);
extern void __cdecl FUN_0048a540(void);
extern void __cdecl FUN_00488350(void);
extern void __cdecl FUN_00487150(void);
extern void __cdecl FUN_00486be0(void);
extern void __cdecl FUN_00486180(void);
extern void __cdecl FUN_004852d0(void);
extern void __cdecl FUN_004844d0(void);
extern void __cdecl FUN_004828a0(void);
extern void __cdecl FUN_00482700(void);
extern void __cdecl FUN_00482480(void);
extern void __cdecl FUN_00481f80(void);
extern void __cdecl FUN_00481960(void);
extern void __cdecl FUN_004812d0(void);
extern void __cdecl FUN_004804e0(void);
extern void __cdecl FUN_0047fa40(void);
extern void __cdecl FUN_0047a310(void);
extern void __cdecl FUN_00476540(void);
extern void __cdecl FUN_004729e0(void);
extern void __cdecl FUN_0046f900(void);
extern void __cdecl FUN_0046bc60(void);
extern void __cdecl FUN_00467bd0(void);
extern void __cdecl FUN_00465010(void);
extern void __cdecl FUN_00461740(void);
extern void __cdecl FUN_0045d9d0(void);
extern void __cdecl FUN_00458250(void);
extern void __cdecl FUN_00454ec0(void);
extern void __cdecl FUN_00450960(void);
extern void __cdecl FUN_0044cea0(void);
extern void __cdecl FUN_00448700(void);
extern void __cdecl FUN_00446d70(void);
extern void __cdecl FUN_00444f30(void);
extern void __cdecl FUN_00441ec0(void);
extern void __cdecl FUN_0043e2c0(void);
extern void __cdecl FUN_00439c50(void);
extern void __cdecl FUN_00435c40(void);
extern void __cdecl FUN_00431710(void);
extern void __cdecl FUN_00430890(void);
extern void __cdecl FUN_0042bb70(void);
extern void __cdecl FUN_0042aa70(void);
extern void __cdecl FUN_0042a1a0(void);
extern void __cdecl FUN_00429a60(void);
extern void __cdecl FUN_004292d0(void);
extern void __cdecl FUN_00428f20(void);
extern void __cdecl FUN_00428a70(void);
extern void __cdecl FUN_00423e30(void);
extern void __cdecl FUN_004227d0(void);
extern void __cdecl FUN_00422450(void);
extern void __cdecl FUN_00422040(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0070f090(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411ec0(void);

/* ---- extern functions used as pushed code pointers ---- */
extern void __cdecl FUN_00421b40(void);
extern void __cdecl FUN_00421b30(void);
extern void __cdecl FUN_00421b70(void);
extern void __cdecl FUN_00421b60(void);
extern void __cdecl FUN_004219b0(void);
extern void __cdecl FUN_004218d0(void);
extern void __cdecl FUN_00421990(void);
extern void __cdecl FUN_004218c0(void);
extern void __cdecl FUN_004219d0(void);
extern void __cdecl FUN_004218e0(void);
extern void __cdecl FUN_00421ab0(void);
extern void __cdecl FUN_00421950(void);
extern void __cdecl FUN_004219f0(void);
extern void __cdecl FUN_004218f0(void);
extern void __cdecl FUN_00421a10(void);
extern void __cdecl FUN_00421900(void);
extern void __cdecl FUN_00421a30(void);
extern void __cdecl FUN_00421910(void);
extern void __cdecl FUN_00421a50(void);
extern void __cdecl FUN_00421920(void);
extern void __cdecl FUN_00421a70(void);
extern void __cdecl FUN_00421930(void);
extern void __cdecl FUN_00421ad0(void);
extern void __cdecl FUN_00421960(void);
extern void __cdecl FUN_00421af0(void);
extern void __cdecl FUN_00421970(void);
extern void __cdecl FUN_00421b10(void);
extern void __cdecl FUN_00421980(void);
extern void __cdecl FUN_00421a90(void);
extern void __cdecl FUN_00421940(void);

__declspec(naked) void FUN_00421350(void)
{
    __asm {
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0x0
        push    offset g_0076dd20
        call    FUN_006f4710
        push    eax
        push    0x0
        push    offset g_0076dd0c
        mov     dword ptr [g_007b9578], eax
        call    FUN_006f4710
        mov     ecx, dword ptr [g_007b9578]
        push    ecx
        push    0x0
        push    offset g_0076dd00
        mov     dword ptr [g_007b95a4], eax
        call    FUN_006f4710
        mov     edx, dword ptr [g_007b9578]
        push    edx
        push    0x0
        push    offset g_0076dcf4
        mov     dword ptr [g_007b9580], eax
        call    FUN_006f4710
        mov     dword ptr [g_007b9584], eax
        mov     eax, dword ptr [g_007b9578]
        push    eax
        push    0x0
        push    offset g_0076dce0
        call    FUN_006f4710
        mov     ecx, dword ptr [g_007b9578]
        push    ecx
        push    0x0
        push    offset g_0076dcd4
        mov     dword ptr [g_007b9588], eax
        call    FUN_006f4710
        mov     edx, dword ptr [g_007b9578]
        push    edx
        push    0x0
        push    offset g_0076dcc4
        mov     dword ptr [g_007b9590], eax
        call    FUN_006f4710
        mov     dword ptr [g_007b958c], eax
        mov     eax, dword ptr [g_007b9578]
        push    eax
        push    0x0
        push    offset g_0076dcb8
        call    FUN_006f4710
        mov     ecx, dword ptr [g_007b9578]
        push    ecx
        push    0x0
        push    offset g_0076dcac
        mov     dword ptr [g_007b9598], eax
        call    FUN_006f4710
        mov     edx, dword ptr [g_007b9578]
        push    edx
        push    0x0
        push    offset g_0076dca0
        mov     dword ptr [g_007b959c], eax
        call    FUN_006f4710
        mov     dword ptr [g_007b95a0], eax
        mov     eax, dword ptr [g_007b9578]
        push    eax
        push    0x0
        push    offset g_0076dc90
        call    FUN_006f4710
        mov     ecx, dword ptr [g_007b9578]
        push    ecx
        push    0x0
        push    offset g_0076dc84
        mov     dword ptr [g_007b9594], eax
        call    FUN_006f4710
        push    eax
        mov     dword ptr [g_007b957c], eax
        call    FUN_006f4950

        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [g_007b9560], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [g_007b955c], eax
        mov     dword ptr [g_007b9558], ecx
        mov     dword ptr [g_007b9554], edx
        mov     al, byte ptr [esp + 0x18]
        mov     dword ptr [g_007b9550], 0x3d4ccccd
        mov     byte ptr [g_007b95a8], al

        call    FUN_0048fc30
        call    FUN_0048f110
        call    FUN_0048bd40
        call    FUN_0048a540
        call    FUN_00488350
        call    FUN_00487150
        call    FUN_00486be0
        call    FUN_00486180
        call    FUN_004852d0
        call    FUN_004844d0
        call    FUN_004828a0
        call    FUN_00482700
        call    FUN_00482480
        call    FUN_00481f80
        call    FUN_00481960
        call    FUN_004812d0
        call    FUN_004804e0
        call    FUN_0047fa40
        call    FUN_0047a310
        call    FUN_00476540
        call    FUN_004729e0
        call    FUN_0046f900
        call    FUN_0046bc60
        call    FUN_00467bd0
        call    FUN_00465010
        call    FUN_00461740
        call    FUN_0045d9d0
        call    FUN_00458250
        call    FUN_00454ec0
        call    FUN_00450960
        call    FUN_0044cea0
        call    FUN_00448700
        call    FUN_00446d70
        call    FUN_00444f30
        call    FUN_00441ec0
        call    FUN_0043e2c0
        call    FUN_00439c50
        call    FUN_00435c40
        call    FUN_00431710
        call    FUN_00430890
        call    FUN_0042bb70
        call    FUN_0042aa70
        call    FUN_0042a1a0
        call    FUN_00429a60
        call    FUN_004292d0
        call    FUN_00428f20
        call    FUN_00428a70
        call    FUN_00423e30
        call    FUN_004227d0
        call    FUN_00422450
        call    FUN_00422040
        call    FUN_006f49a0

        push    0x0
        push    0x0
        push    offset FUN_00421b40
        push    offset FUN_00421b30
        push    offset g_0076dc60
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421b70
        push    offset FUN_00421b60
        push    offset g_0076dc40
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_004219b0
        push    offset FUN_004218d0
        push    offset g_0076dc24
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421990
        push    offset FUN_004218c0
        push    offset g_0076dbf0
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_004219d0
        push    offset FUN_004218e0
        push    offset g_0076dbd4
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421ab0
        push    offset FUN_00421950
        push    offset g_0076dbb0
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_004219f0
        push    offset FUN_004218f0
        push    offset g_0076db80
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421a10
        push    offset FUN_00421900
        push    offset g_0076db50
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421a30
        push    offset FUN_00421910
        push    offset g_0076db1c
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421a50
        push    offset FUN_00421920
        push    offset g_0076daec
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421a70
        push    offset FUN_00421930
        push    offset g_0076dabc
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421ad0
        push    offset FUN_00421960
        push    offset g_0076da8c
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421af0
        push    offset FUN_00421970
        push    offset g_0076da58
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    offset FUN_00421b10
        push    offset FUN_00421980
        push    offset g_0076da2c
        call    FUN_0070f090

        push    0x0
        push    0x0
        push    0x0
        push    0x2e
        call    FUN_00704a80
        test    eax, eax
        ja      L42171c
        push    0x0
        push    0x0
        push    0x0
        push    0x2f
        call    FUN_00704a80
        test    eax, eax
        jbe     L421734
L42171c:
        push    0x0
        push    0x0
        push    offset FUN_00421a90
        push    offset FUN_00421940
        push    offset g_0076da00
        call    FUN_0070f090
L421734:
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        push    esi
        jz      L421889

        push    offset g_0076d9ec
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      L421889
        push    0x0
        lea     ecx, [esp + 0x20]
        push    ecx
        push    offset g_0076d9dc
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L42177c
        mov     edx, dword ptr [esp + 0x1c]
        and     edx, 0xff
        mov     dword ptr [g_007b2210], edx
L42177c:
        push    0x0
        lea     eax, [esp + 0x20]
        push    eax
        push    offset g_0076d9cc
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L4217a3
        mov     ecx, dword ptr [esp + 0x1c]
        and     ecx, 0xff
        mov     dword ptr [g_007b221c], ecx
L4217a3:
        push    0x0
        lea     edx, [esp + 0x20]
        push    edx
        push    offset g_0076d9c0
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L4217c8
        mov     eax, dword ptr [esp + 0x1c]
        and     eax, 0xff
        mov     dword ptr [g_007b2220], eax
L4217c8:
        push    0x0
        lea     ecx, [esp + 0x20]
        push    ecx
        push    offset g_0076d9b4
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L4217ef
        mov     edx, dword ptr [esp + 0x1c]
        and     edx, 0xff
        mov     dword ptr [g_007b2228], edx
L4217ef:
        push    0x0
        lea     eax, [esp + 0x20]
        push    eax
        push    offset g_0076d9a8
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L421816
        mov     ecx, dword ptr [esp + 0x1c]
        and     ecx, 0xff
        mov     dword ptr [g_007b222c], ecx
L421816:
        push    0x0
        lea     edx, [esp + 0x20]
        push    edx
        push    offset g_0076d99c
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L42183b
        mov     eax, dword ptr [esp + 0x1c]
        and     eax, 0xff
        mov     dword ptr [g_007b2230], eax
L42183b:
        push    0x0
        lea     ecx, [esp + 0x20]
        push    ecx
        push    offset g_0076d98c
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L421862
        mov     edx, dword ptr [esp + 0x1c]
        and     edx, 0xff
        mov     dword ptr [g_007b2234], edx
L421862:
        push    0x0
        lea     eax, [esp + 0x20]
        push    eax
        push    offset g_0076d97c
        mov     ecx, esi
        call    FUN_00411ec0
        test    al, al
        jz      L421889
        mov     ecx, dword ptr [esp + 0x1c]
        and     ecx, 0xff
        mov     dword ptr [g_007b9574], ecx
L421889:
        mov     dword ptr [g_007b94a0], 0xffffffff
        mov     dword ptr [g_007b9490], 0x3f800000
        mov     dword ptr [g_007b9494], 0x3f800000
        mov     dword ptr [g_007b9498], 0x3f800000
        mov     dword ptr [g_007b949c], 0x3f800000
        pop     esi
        ret
    }
}
