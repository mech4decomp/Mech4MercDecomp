/*
 * FUN_005B7EF0 (219 B true extent; 225 B slice incl. next fn) — in-.text
 * data block function (block 0x5B7ED9). FPU-heavy: builds a matrix from
 * fild/fmul constants and calls FUN_00713ae0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713ae0(void);

extern int   g_00858940;   /* int @ 0x858940 */
extern int   g_00858944;   /* int @ 0x858944 */
extern float g_0076ed00;   /* float @ 0x76ed00 */
extern float g_0076d3c8;   /* float @ 0x76d3c8 */
extern float g_007869cc;   /* float @ 0x7869cc */

__declspec(naked) void FUN_005B7EF0(void)
{
    __asm {
        sub     esp, 0x84
        fild    dword ptr [g_00858940]
        push    edi
        xor     eax, eax
        mov     ecx, 0x20
        fst     dword ptr [esp + 4]
        lea     edi, [esp + 8]
        fmul    dword ptr [g_0076ed00]
        rep stosd
        fst     dword ptr [esp + 8]
        fild    dword ptr [g_00858944]
        mov     eax, 0x77aaaaaa
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x38], eax
        fld     st(0)
        mov     dword ptr [esp + 0x58], eax
        fmul    dword ptr [g_0076ed00]
        mov     dword ptr [esp + 0x78], eax
        push    4
        lea     eax, [esp + 0xc]
        fst     dword ptr [esp + 0x10]
        push    eax
        fld     dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x1c], 0x3f800000
        fmul    dword ptr [g_0076d3c8]
        mov     dword ptr [esp + 0x3c], 0x3f800000
        mov     dword ptr [esp + 0x5c], 0x3f800000
        mov     dword ptr [esp + 0x7c], 0x3f800000
        fst     dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x18], 0x3f666666
        mov     dword ptr [esp + 0x38], 0x3f666666
        fstp    dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x58], 0x3f666666
        fmul    dword ptr [g_007869cc]
        mov     dword ptr [esp + 0x78], 0x3f666666
        fst     dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x74], edx
        fstp    dword ptr [esp + 0x70]
        call    FUN_00713ae0
        pop     edi
        add     esp, 0x84
        ret
    }
}
