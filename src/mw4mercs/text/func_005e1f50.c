/*
 * FUN_005e1f50 (75 B) — Advances a linked-list cursor (DAT_007f2534) rooted
 * at DAT_007f2530, guarded by *DAT_007f252c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005e1f50(void)
{
    

extern int DAT_007f252c;
extern int DAT_007f2534;
extern int DAT_007f2530;
__asm {
mov eax, dword ptr [DAT_007f252c]
        cmp     dword ptr [eax], 0x0
        jz      L_1f93
        mov eax, dword ptr [DAT_007f2534]
        test    eax, eax
        mov eax, dword ptr [DAT_007f2530]
        jz      L_1f84
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, edx
        test    ecx, ecx
        mov     dword ptr [eax + 0x8], edx
        jz      L_1f7c
        cmp     dword ptr [ecx], 0x0
        jnz     L_1f84
L_1f7c:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], edx
L_1f84:
        mov     eax, dword ptr [eax + 0x8]
        test    eax, eax
        jz      L_1f93
        mov     eax, dword ptr [eax]
        mov dword ptr [DAT_007f2534], eax
        ret
L_1f93:
        xor     eax, eax
        mov dword ptr [DAT_007f2534], eax
        ret
    }


}
