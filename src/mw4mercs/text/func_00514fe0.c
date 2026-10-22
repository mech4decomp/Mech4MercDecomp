/*
 * FUN_00514fe0 (2963 B) — terrain/geometry "command dispatcher". __stdcall,
 * RET 0xC (3 params). Dispatches on *param_3 via a byte-index table
 * (@ 0x515ddc) into a jump table (@ 0x515b74), forwarding to ~150
 * subsystem methods on the global object at DAT_007dd268.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00518b40(void);
extern void __cdecl FUN_00515f60(void);
extern void __cdecl FUN_00516380(void);
extern void __cdecl FUN_00516670(void);
extern void __cdecl FUN_005168b0(void);
extern void __cdecl FUN_005169d0(void);
extern void __cdecl FUN_00516f80(void);
extern void __cdecl FUN_00518180(void);
extern void __cdecl FUN_00516700(void);
extern void __cdecl FUN_00518100(void);
extern void __cdecl FUN_0051e8c0(void);
extern void __cdecl FUN_0051f400(void);
extern void __cdecl FUN_0051f690(void);
extern void __cdecl FUN_00516940(void);
extern void __cdecl FUN_0051f700(void);
extern void __cdecl FUN_0051f750(void);
extern void __cdecl FUN_0051f770(void);
extern void __cdecl FUN_00517af0(void);
extern void __cdecl FUN_005180c0(void);
extern void __cdecl FUN_00521490(void);
extern void __cdecl FUN_00520c40(void);
extern void __cdecl FUN_00520280(void);
extern void __cdecl FUN_00520320(void);
extern void __cdecl FUN_005206b0(void);
extern void __cdecl FUN_005214c0(void);
extern void __cdecl FUN_005215d0(void);
extern void __cdecl FUN_00521600(void);
extern void __cdecl FUN_005202a0(void);
extern void __cdecl FUN_00521630(void);
extern void __cdecl FUN_00521720(void);
extern void __cdecl FUN_00521790(void);
extern void __cdecl FUN_005217d0(void);
extern void __cdecl FUN_00521a80(void);
extern void __cdecl FUN_0051eb90(void);
extern void __cdecl FUN_0051ec20(void);
extern void __cdecl FUN_0051ed30(void);
extern void __cdecl FUN_00521d00(void);
extern void __cdecl FUN_00521e10(void);
extern void __cdecl FUN_00521f30(void);
extern void __cdecl FUN_00521ea0(void);
extern void __cdecl FUN_00522050(void);
extern void __cdecl FUN_005224e0(void);
extern void __cdecl FUN_00522310(void);
extern void __cdecl FUN_00522410(void);
extern void __cdecl FUN_00522800(void);
extern void __cdecl FUN_00522ac0(void);
extern void __cdecl FUN_00522de0(void);
extern void __cdecl FUN_005218f0(void);
extern void __cdecl FUN_005230e0(void);
extern void __cdecl FUN_005231f0(void);
extern void __cdecl FUN_00523300(void);
extern void __cdecl FUN_005233f0(void);
extern void __cdecl FUN_00523500(void);
extern void __cdecl FUN_00523540(void);
extern void __cdecl FUN_00521fc0(void);
extern void __cdecl FUN_00523580(void);
extern void __cdecl FUN_005236a0(void);
extern void __cdecl FUN_00524230(void);
extern void __cdecl FUN_00524260(void);
extern void __cdecl FUN_00524360(void);
extern void __cdecl FUN_00524500(void);
extern void __cdecl FUN_00524650(void);
extern void __cdecl FUN_00524790(void);
extern void __cdecl FUN_005248a0(void);
extern void __cdecl FUN_00524b70(void);
extern void __cdecl FUN_00524b80(void);
extern void __cdecl FUN_00525330(void);
extern void __cdecl FUN_00525360(void);
extern void __cdecl FUN_00525370(void);
extern void __cdecl FUN_005253a0(void);
extern void __cdecl FUN_005254e0(void);
extern void __cdecl FUN_00524b20(void);
extern void __cdecl FUN_00518150(void);
extern void __cdecl FUN_005255d0(void);
extern void __cdecl FUN_00525810(void);
extern void __cdecl FUN_00525be0(void);
extern void __cdecl FUN_00525c10(void);
extern void __cdecl FUN_00525c40(void);
extern void __cdecl FUN_00525c70(void);
extern void __cdecl FUN_00525ca0(void);
extern void __cdecl FUN_00525f00(void);
extern void __cdecl FUN_00526600(void);
extern void __cdecl FUN_005266d0(void);
extern void __cdecl FUN_00526940(void);
extern void __cdecl FUN_00526a90(void);
extern void __cdecl FUN_00526bc0(void);
extern void __cdecl FUN_00515f00(void);
extern void __cdecl FUN_00515f30(void);
extern void __cdecl FUN_00526c00(void);
extern void __cdecl FUN_00526d70(void);
extern void __cdecl FUN_00526fa0(void);
extern void __cdecl FUN_00527140(void);
extern void __cdecl FUN_00527160(void);
extern void __cdecl FUN_005272d0(void);
extern void __cdecl FUN_00527300(void);
extern void __cdecl FUN_00527390(void);
extern void __cdecl FUN_00527660(void);
extern void __cdecl FUN_00527ea0(void);
extern void __cdecl FUN_00527fc0(void);
extern void __cdecl FUN_00527010(void);
extern void __cdecl FUN_00528180(void);
extern void __cdecl FUN_005282e0(void);
extern void __cdecl FUN_00528310(void);
extern void __cdecl FUN_00528420(void);
extern void __cdecl FUN_00517910(void);
extern void __cdecl FUN_00524b90(void);
extern void __cdecl FUN_00528500(void);
extern void __cdecl FUN_00611f00(void);
extern void __cdecl FUN_00611f50(void);
extern void __cdecl FUN_00611fa0(void);
extern void __cdecl FUN_00611fb0(void);
extern void __cdecl FUN_00611fd0(void);
extern void __cdecl FUN_00526040(void);
extern void __cdecl FUN_00527830(void);
extern void __cdecl FUN_005278e0(void);
extern void __cdecl FUN_00527900(void);
extern void __cdecl FUN_00527930(void);
extern void __cdecl FUN_00527950(void);
extern void __cdecl FUN_00527970(void);
extern void __cdecl FUN_005279a0(void);
extern void __cdecl FUN_005279c0(void);
extern void __cdecl FUN_00527ac0(void);
extern void __cdecl FUN_00527a80(void);
extern void __cdecl FUN_00527a00(void);
extern void __cdecl FUN_00527a40(void);
extern void __cdecl FUN_00527ae0(void);
extern void __cdecl FUN_00527bb0(void);
extern void __cdecl FUN_00527bf0(void);
extern void __cdecl FUN_00527c30(void);
extern void __cdecl FUN_00527cf0(void);
extern void __cdecl FUN_00527d50(void);
extern void __cdecl FUN_00527d10(void);
extern void __cdecl FUN_00527320(void);
extern void __cdecl FUN_00527350(void);
extern void __cdecl FUN_00527d80(void);
extern void __cdecl FUN_00527da0(void);
extern void __cdecl FUN_00527dc0(void);
extern void __cdecl FUN_00527de0(void);
extern void __cdecl FUN_00527e20(void);
extern void __cdecl FUN_00527e60(void);
extern void __cdecl FUN_00518280(void);
extern void __cdecl FUN_005287f0(void);
extern void __cdecl FUN_00528700(void);
extern void __cdecl FUN_005288e0(void);
extern void __cdecl FUN_00516e10(void);
extern void __cdecl FUN_00528950(void);
extern void __cdecl FUN_00528a10(void);
extern void __cdecl FUN_00528b40(void);
extern void __cdecl FUN_00515ed0(void);
extern void __cdecl FUN_00528e70(void);
extern void __cdecl FUN_00529050(void);
extern void __cdecl FUN_00516a80(void);
extern void __cdecl FUN_00516b30(void);

extern int  g_007dd268;    /* DAT_007dd268 */
extern char g_515ddc[];    /* byte index table @ 0x515ddc */
extern int  g_jt_515b74[]; /* jump table @ 0x515b74 */

__declspec(naked) unsigned int __stdcall FUN_00514fe0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        inc     ecx
        cmp     ecx, 0xe8
        ja      L_5b6b
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_515ddc]
        jmp     dword ptr [edx*4 + g_jt_515b74]

        /* case 0xffffffff: FUN_00518b40(param_2, param_3) */
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_00518b40
        ret     0xc

        /* case 0: FUN_00515f60(param_2, param_3) */
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00515f60
        ret     0xc

        /* case 1: FUN_00516380() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00516380
        ret     0xc

        /* case 8: FUN_00516670() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00516670
        ret     0xc

        /* case 2: FUN_005168b0() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_005168b0
        ret     0xc

        /* case 3: FUN_005169d0() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_005169d0
        ret     0xc

        /* case 4: FUN_00516f80(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00516f80
        ret     0xc

        /* case 5: FUN_00518180(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00518180
        ret     0xc

        /* case 6: FUN_00516700() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00516700
        ret     0xc

        /* case 7: FUN_00518100(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00518100
        ret     0xc

        /* case 9: FUN_0051e8c0(0) */
        mov     ecx, dword ptr [g_007dd268]
        push    0x0
        call    FUN_0051e8c0
        ret     0xc

        /* case 10: FUN_0051f400(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_0051f400
        ret     0xc

        /* case 0xb: FUN_0051f690(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_0051f690
        ret     0xc

        /* case 0xc: FUN_00516940() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00516940
        ret     0xc

        /* case 0xd: FUN_0051f700(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_0051f700
        ret     0xc

        /* case 0xe: FUN_0051f750() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_0051f750
        ret     0xc

        /* case 0xf: FUN_0051f770(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_0051f770
        ret     0xc

        /* case 0x10: FUN_00517af0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00517af0
        ret     0xc

        /* case 0x11: FUN_005180c0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005180c0
        ret     0xc

        /* case 0x12: FUN_00521490(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00521490
        ret     0xc

        /* case 0x6b: FUN_00520c40(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00520c40
        ret     0xc

        /* case 0x13: FUN_00520280(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00520280
        ret     0xc

        /* case 0x14: FUN_00520320(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00520320
        ret     0xc

        /* case 0x15: FUN_005206b0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005206b0
        ret     0xc

        /* case 0x16: FUN_005214c0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005214c0
        ret     0xc

        /* case 0x18: FUN_005215d0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005215d0
        ret     0xc

        /* case 0x19: FUN_00521600(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00521600
        ret     0xc

        /* case 0x17: FUN_005202a0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005202a0
        ret     0xc

        /* case 0x1a: FUN_00521630(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00521630
        ret     0xc

        /* case 0x1b: FUN_00521720(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00521720
        ret     0xc

        /* case 0x1c: FUN_00521790(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00521790
        ret     0xc

        /* case 0x1d: FUN_005217d0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005217d0
        ret     0xc

        /* case 0x1e: FUN_00521a80(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00521a80
        ret     0xc

        /* case 0x1f: FUN_0051eb90(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_0051eb90
        ret     0xc

        /* case 0x21: FUN_0051ec20(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_0051ec20
        ret     0xc

        /* case 0x20: FUN_0051ed30() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_0051ed30
        ret     0xc

        /* case 0x22: FUN_00521d00(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00521d00
        ret     0xc

        /* case 0x23: FUN_00521e10(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00521e10
        ret     0xc

        /* case 0x24: FUN_00521f30(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00521f30
        ret     0xc

        /* case 0x25: FUN_00521ea0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00521ea0
        ret     0xc

        /* case 0x27: FUN_00522050(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00522050
        ret     0xc

        /* case 0x28: FUN_005224e0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005224e0
        ret     0xc

        /* case 0x5e: FUN_00522310(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00522310
        ret     0xc

        /* case 0x5f: FUN_00522410(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00522410
        ret     0xc

        /* case 0x29: FUN_00522800(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00522800
        ret     0xc

        /* case 0x2a: FUN_00522ac0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00522ac0
        ret     0xc

        /* case 0x2b: FUN_00522de0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00522de0
        ret     0xc

        /* case 0x2c: FUN_005218f0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005218f0
        ret     0xc

        /* case 0x2d: FUN_005230e0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005230e0
        ret     0xc

        /* case 0x2e: FUN_005231f0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005231f0
        ret     0xc

        /* case 0x2f: FUN_00523300(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00523300
        ret     0xc

        /* case 0x30: FUN_005233f0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005233f0
        ret     0xc

        /* case 0x31: FUN_00523500(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00523500
        ret     0xc

        /* case 0x32: FUN_00523540(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00523540
        ret     0xc

        /* case 0x26: FUN_00521fc0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00521fc0
        ret     0xc

        /* case 0x33: FUN_00523580() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00523580
        ret     0xc

        /* case 0x34: FUN_005236a0() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_005236a0
        ret     0xc

        /* case 0x35: FUN_00524230(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00524230
        ret     0xc

        /* case 0x36: FUN_00524260(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00524260
        ret     0xc

        /* case 0x37: FUN_00524360(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00524360
        ret     0xc

        /* case 0x38: FUN_00524500(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00524500
        ret     0xc

        /* case 0x39: FUN_00524650(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00524650
        ret     0xc

        /* case 0x3a: FUN_00524790(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00524790
        ret     0xc

        /* case 0x3c: FUN_005248a0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005248a0
        ret     0xc

        /* case 0x3d: FUN_00524b70(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00524b70
        ret     0xc

        /* case 0x3e: FUN_00524b80(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00524b80
        ret     0xc

        /* case 0x40: FUN_00525330(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00525330
        ret     0xc

        /* case 0x41: FUN_00525360(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00525360
        ret     0xc

        /* case 0x42: FUN_00525370(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00525370
        ret     0xc

        /* case 0x43: FUN_005253a0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005253a0
        ret     0xc

        /* case 0x44: FUN_005254e0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005254e0
        ret     0xc

        /* case 0x45: FUN_00524b20(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00524b20
        ret     0xc

        /* case 0x46: FUN_00518150(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00518150
        ret     0xc

        /* case 0x47: FUN_005255d0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005255d0
        ret     0xc

        /* case 0x48: FUN_00525810(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00525810
        ret     0xc

        /* case 0x49: FUN_00525be0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00525be0
        ret     0xc

        /* case 0x4a: FUN_00525c10(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00525c10
        ret     0xc

        /* case 0x4b: FUN_00525c40(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00525c40
        ret     0xc

        /* case 0x4c: FUN_00525c70(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00525c70
        ret     0xc

        /* case 0x4d: FUN_00525ca0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00525ca0
        ret     0xc

        /* case 0x4e: FUN_00525f00(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00525f00
        ret     0xc

        /* case 0x4f: FUN_00526600(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00526600
        ret     0xc

        /* case 0x50: FUN_005266d0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005266d0
        ret     0xc

        /* case 0x51: FUN_00526940(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00526940
        ret     0xc

        /* case 0x52: FUN_00526a90(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00526a90
        ret     0xc

        /* case 0x53: FUN_00526bc0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00526bc0
        ret     0xc

        /* case 0x54: FUN_00515f00(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00515f00
        ret     0xc

        /* case 0x75: FUN_00515f30(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00515f30
        ret     0xc

        /* case 0x60: FUN_00526c00(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00526c00
        ret     0xc

        /* case 0x55: FUN_00526d70(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00526d70
        ret     0xc

        /* case 0x56: FUN_00526fa0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00526fa0
        ret     0xc

        /* case 0x64: FUN_00527140(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527140
        ret     0xc

        /* case 0x65: FUN_00527160(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527160
        ret     0xc

        /* case 0x66: FUN_005272d0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005272d0
        ret     0xc

        /* case 0x67: FUN_00527300(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527300
        ret     0xc

        /* case 0x68: FUN_00527390(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527390
        ret     0xc

        /* case 0x69: FUN_00527660(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527660
        ret     0xc

        /* case 0x6a: FUN_00527ea0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527ea0
        ret     0xc

        /* case 0x58: FUN_00527fc0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527fc0
        ret     0xc

        /* case 0x57: FUN_00527010(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527010
        ret     0xc

        /* case 0x59: FUN_00528180(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00528180
        ret     0xc

        /* case 0x5a: FUN_005282e0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005282e0
        ret     0xc

        /* case 0x5b: FUN_00528310(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00528310
        ret     0xc

        /* case 0x5c: FUN_00528420(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00528420
        ret     0xc

        /* case 0x71: FUN_00517910(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00517910
        ret     0xc

        /* case 0x72: FUN_00524b90(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00524b90
        ret     0xc

        /* case 0x5d: FUN_00528500(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00528500
        ret     0xc

        /* case 0x6c: FUN_00611f00() */
        call    FUN_00611f00
        ret     0xc

        /* case 0x6d: FUN_00611f50() */
        call    FUN_00611f50
        ret     0xc

        /* case 0x6e: FUN_00611fa0() */
        call    FUN_00611fa0
        ret     0xc

        /* case 0x6f: FUN_00611fb0() */
        call    FUN_00611fb0
        ret     0xc

        /* case 0x70: FUN_00611fd0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        push    eax
        call    FUN_00611fd0
        add     esp, 0x8
        ret     0xc

        /* case 0x73: FUN_00526040(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00526040
        ret     0xc

        /* case 0xc8: FUN_00527830(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527830
        ret     0xc

        /* case 0xc9: FUN_005278e0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005278e0
        ret     0xc

        /* case 0xca: FUN_00527900(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527900
        ret     0xc

        /* case 0xcc: FUN_00527930(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527930
        ret     0xc

        /* case 0xcd: FUN_00527950(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527950
        ret     0xc

        /* case 0xce: FUN_00527970(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527970
        ret     0xc

        /* case 0xcf: FUN_005279a0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_005279a0
        ret     0xc

        /* case 0xda: FUN_005279c0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005279c0
        ret     0xc

        /* case 0xcb: FUN_00527ac0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527ac0
        ret     0xc

        /* case 0xd2: FUN_00527a80(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527a80
        ret     0xc

        /* case 0xd0: FUN_00527a00(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527a00
        ret     0xc

        /* case 0xd1: FUN_00527a40(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527a40
        ret     0xc

        /* case 0xd3: FUN_00527ae0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527ae0
        ret     0xc

        /* case 0xd4: FUN_00527bb0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527bb0
        ret     0xc

        /* case 0xd5: FUN_00527bf0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527bf0
        ret     0xc

        /* case 0xd6: FUN_00527c30(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527c30
        ret     0xc

        /* case 0xd7: FUN_00527cf0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527cf0
        ret     0xc

        /* case 0xd8: FUN_00527d50(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527d50
        ret     0xc

        /* case 0xd9: FUN_00527d10(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527d10
        ret     0xc

        /* case 0xe6: FUN_00527320(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527320
        ret     0xc

        /* case 0xe7: FUN_00527350(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527350
        ret     0xc

        /* case 0xdc: FUN_00527d80(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527d80
        ret     0xc

        /* case 0xdd: FUN_00527da0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527da0
        ret     0xc

        /* case 0xde: FUN_00527dc0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527dc0
        ret     0xc

        /* case 0xdf: FUN_00527de0(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527de0
        ret     0xc

        /* case 0xe0: FUN_00527e20(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00527e20
        ret     0xc

        /* case 0xe1: FUN_00527e60(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00527e60
        ret     0xc

        /* case 0x74: FUN_00518280() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00518280
        ret     0xc

        /* case 0x76: FUN_005287f0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005287f0
        ret     0xc

        /* case 0x77: FUN_00528700(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00528700
        ret     0xc

        /* case 0x78: FUN_005288e0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_005288e0
        ret     0xc

        /* case 0x79: FUN_00516e10(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00516e10
        ret     0xc

        /* case 0x7a: FUN_00528950(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00528950
        ret     0xc

        /* case 0x7b: FUN_00528a10() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00528a10
        ret     0xc

        /* case 0x7c: FUN_00528b40(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00528b40
        ret     0xc

        /* case 0x7d: FUN_00515ed0(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00515ed0
        ret     0xc

        /* case 0xe2: FUN_00528e70(param_3, param_2) */
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_007dd268]
        push    edx
        push    eax
        call    FUN_00528e70
        ret     0xc

        /* case 0xe3: FUN_00529050(param_3, param_2) */
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    eax
        call    FUN_00529050
        ret     0xc

        /* case 0x7e: FUN_00516a80() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00516a80
        ret     0xc

        /* case 0x7f: FUN_00516b30() */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00516b30
        ret     0xc

        /* default: return 1 */
L_5b6b:
        mov     eax, 0x1
        ret     0xc
    }
}
