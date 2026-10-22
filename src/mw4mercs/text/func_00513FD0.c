/*
 * FUN_00513FD0 (43 B true extent; 227 B slice incl. 4 adjacent fns) —
 * in-.text data block function (block 0x513F1F). Uses 0x7dab44/0x7dab40
 * XOR-keyed pointer scheme; calls FUN_00547690.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00547690(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_00513FD0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0xc]
        xor     eax, edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        push    1
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        call    FUN_00547690
        ret     0xc
    }
}
