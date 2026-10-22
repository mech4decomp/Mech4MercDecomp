/*
 * FUN_0060f570 (73 B) — Pointer-table lookup helper.
 *
 * __stdcall (RET 8, two params). Reads two global pointers, XORs their
 * targets, indexes a table, and stores a resolved value into
 * param_1[1]. Always returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *DAT_007dab44;
extern int *DAT_007dab40;

__declspec(naked) int __stdcall FUN_0060f570(void *param_1, void *param_2)
{
    __asm {
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x4]
        xor     edx, ecx
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x2c]
        test    esi, esi
        mov     dword ptr [eax], 0x0
        pop     esi
        jz      l_skip
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x2c]
        mov     ecx, dword ptr [edx + 0x2c]
        mov     dword ptr [eax], ecx
    l_skip:
        mov     eax, 0x1
        ret     0x8
    }
}
