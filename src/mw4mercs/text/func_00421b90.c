/*
 * FUN_00421b90 (715 B) — MLR graphics library shutdown/teardown:
 * writes Graphics Options back to the registry, then frees all the
 * memory pools created by FUN_00421350.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- extern data symbols ---- */
extern int g_007b2210, g_007b221c, g_007b2220, g_007b2228, g_007b222c;
extern int g_007b2230, g_007b2234, g_007b9574;
extern int g_007b9578, g_007b957c, g_007b95a4, g_007b9580, g_007b9584;
extern int g_007b9588, g_007b9590, g_007b958c, g_007b9594, g_007b9598;
extern int g_007b959c, g_007b95a0;

/* ---- extern string literals ---- */
extern char g_0076d9ec[], g_0076d9dc[], g_0076d9cc[], g_0076d9c0[];
extern char g_0076d9b4[], g_0076d9a8[], g_0076d99c[], g_0076d98c[];
extern char g_0076d97c[];

/* ---- extern functions ---- */
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006f4850(void);
extern void __cdecl FUN_00422080(void);
extern void __cdecl FUN_00422490(void);
extern void __cdecl FUN_00422c30(void);
extern void __cdecl FUN_00423fc0(void);
extern void __cdecl FUN_00428ac0(void);
extern void __cdecl FUN_00428f60(void);
extern void __cdecl FUN_00429550(void);
extern void __cdecl FUN_00429aa0(void);
extern void __cdecl FUN_0042a1e0(void);
extern void __cdecl FUN_0042aab0(void);
extern void __cdecl FUN_0042bc80(void);
extern void __cdecl FUN_004308d0(void);
extern void __cdecl FUN_004317b0(void);
extern void __cdecl FUN_00435ca0(void);
extern void __cdecl FUN_00439cf0(void);
extern void __cdecl FUN_0043e320(void);
extern void __cdecl FUN_00442030(void);
extern void __cdecl FUN_00445010(void);
extern void __cdecl FUN_00446db0(void);
extern void __cdecl FUN_00448780(void);
extern void __cdecl FUN_0044cf40(void);
extern void __cdecl FUN_004509c0(void);
extern void __cdecl FUN_00454f20(void);
extern void __cdecl FUN_004582f0(void);
extern void __cdecl FUN_0045da70(void);
extern void __cdecl FUN_004617a0(void);
extern void __cdecl FUN_00465070(void);
extern void __cdecl FUN_00467c70(void);
extern void __cdecl FUN_0046bcc0(void);
extern void __cdecl FUN_0046fa70(void);
extern void __cdecl FUN_00472a80(void);
extern void __cdecl FUN_004765a0(void);
extern void __cdecl FUN_0047a410(void);
extern void __cdecl FUN_0047fb00(void);
extern void __cdecl FUN_00480710(void);
extern void __cdecl FUN_00481310(void);
extern void __cdecl FUN_004819a0(void);
extern void __cdecl FUN_00481fc0(void);
extern void __cdecl FUN_004824c0(void);
extern void __cdecl FUN_00482740(void);
extern void __cdecl FUN_00482a70(void);
extern void __cdecl FUN_00484670(void);
extern void __cdecl FUN_00485470(void);
extern void __cdecl FUN_004861c0(void);
extern void __cdecl FUN_00486d90(void);
extern void __cdecl FUN_00487190(void);
extern void __cdecl FUN_004883b0(void);
extern void __cdecl FUN_0048a730(void);
extern void __cdecl FUN_0048bdb0(void);
extern void __cdecl FUN_0048f160(void);
extern void __cdecl FUN_0048fc70(void);

__declspec(naked) void FUN_00421b90(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      L421c5d
        push    esi
        push    offset g_0076d9ec
        call    FUN_0040eda0
        mov     esi, eax
        cmp     dword ptr [g_007b2210], edi
        setnz   al
        mov     ecx, esi
        push    eax
        push    offset g_0076d9dc
        call    FUN_00411f20
        cmp     dword ptr [g_007b221c], edi
        setnz   cl
        push    ecx
        push    offset g_0076d9cc
        mov     ecx, esi
        call    FUN_00411f20
        cmp     dword ptr [g_007b2220], edi
        setnz   dl
        mov     ecx, esi
        push    edx
        push    offset g_0076d9c0
        call    FUN_00411f20
        cmp     dword ptr [g_007b2228], edi
        setnz   al
        mov     ecx, esi
        push    eax
        push    offset g_0076d9b4
        call    FUN_00411f20
        cmp     dword ptr [g_007b222c], edi
        setnz   cl
        push    ecx
        push    offset g_0076d9a8
        mov     ecx, esi
        call    FUN_00411f20
        cmp     dword ptr [g_007b2230], edi
        setnz   dl
        mov     ecx, esi
        push    edx
        push    offset g_0076d99c
        call    FUN_00411f20
        cmp     dword ptr [g_007b2234], edi
        setnz   al
        mov     ecx, esi
        push    eax
        push    offset g_0076d98c
        call    FUN_00411f20
        cmp     dword ptr [g_007b9574], edi
        setnz   cl
        push    ecx
        push    offset g_0076d97c
        mov     ecx, esi
        call    FUN_00411f20
        pop     esi
L421c5d:
        mov     edx, dword ptr [g_007b9578]
        push    edx
        call    FUN_006f4950
        call    FUN_00422080
        call    FUN_00422490
        call    FUN_00422c30
        call    FUN_00423fc0
        call    FUN_00428ac0
        call    FUN_00428f60
        call    FUN_00429550
        call    FUN_00429aa0
        call    FUN_0042a1e0
        call    FUN_0042aab0
        call    FUN_0042bc80
        call    FUN_004308d0
        call    FUN_004317b0
        call    FUN_00435ca0
        call    FUN_00439cf0
        call    FUN_0043e320
        call    FUN_00442030
        call    FUN_00445010
        call    FUN_00446db0
        call    FUN_00448780
        call    FUN_0044cf40
        call    FUN_004509c0
        call    FUN_00454f20
        call    FUN_004582f0
        call    FUN_0045da70
        call    FUN_004617a0
        call    FUN_00465070
        call    FUN_00467c70
        call    FUN_0046bcc0
        call    FUN_0046fa70
        call    FUN_00472a80
        call    FUN_004765a0
        call    FUN_0047a410
        call    FUN_0047fb00
        call    FUN_00480710
        call    FUN_00481310
        call    FUN_004819a0
        call    FUN_00481fc0
        call    FUN_004824c0
        call    FUN_00482740
        call    FUN_00482a70
        call    FUN_00484670
        call    FUN_00485470
        call    FUN_004861c0
        call    FUN_00486d90
        call    FUN_00487190
        call    FUN_004883b0
        call    FUN_0048a730
        call    FUN_0048bdb0
        call    FUN_0048f160
        call    FUN_0048fc70
        call    FUN_006f49a0

        mov     eax, dword ptr [g_007b957c]
        push    0x1
        push    eax
        call    FUN_006f4850
        mov     ecx, dword ptr [g_007b95a4]
        push    0x1
        push    ecx
        mov     dword ptr [g_007b957c], edi
        call    FUN_006f4850
        mov     edx, dword ptr [g_007b9580]
        push    0x1
        push    edx
        mov     dword ptr [g_007b95a4], edi
        call    FUN_006f4850
        mov     eax, dword ptr [g_007b9584]
        push    0x1
        push    eax
        mov     dword ptr [g_007b9580], edi
        call    FUN_006f4850
        mov     ecx, dword ptr [g_007b9588]
        push    0x1
        push    ecx
        mov     dword ptr [g_007b9584], edi
        call    FUN_006f4850
        mov     dword ptr [g_007b9588], edi
        push    0x1
        mov     edx, dword ptr [g_007b9590]
        push    edx
        call    FUN_006f4850
        mov     eax, dword ptr [g_007b958c]
        push    0x1
        push    eax
        mov     dword ptr [g_007b9590], edi
        call    FUN_006f4850
        mov     ecx, dword ptr [g_007b9594]
        push    0x1
        push    ecx
        mov     dword ptr [g_007b958c], edi
        call    FUN_006f4850
        mov     edx, dword ptr [g_007b9598]
        push    0x1
        push    edx
        mov     dword ptr [g_007b9594], edi
        call    FUN_006f4850
        mov     eax, dword ptr [g_007b959c]
        push    0x1
        push    eax
        mov     dword ptr [g_007b9598], edi
        call    FUN_006f4850
        mov     ecx, dword ptr [g_007b95a0]
        push    0x1
        push    ecx
        mov     dword ptr [g_007b959c], edi
        call    FUN_006f4850
        mov     edx, dword ptr [g_007b9578]
        push    0x1
        push    edx
        mov     dword ptr [g_007b95a0], edi
        call    FUN_006f4850
        mov     dword ptr [g_007b9578], edi
        pop     edi
        ret
    }
}
