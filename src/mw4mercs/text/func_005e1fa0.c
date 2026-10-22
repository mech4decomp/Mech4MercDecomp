/*
 * FUN_005e1fa0 (76 B) — Advances a linked-list cursor (DAT_007f2534) rooted
 * at DAT_007f2530, guarded by *DAT_007f252c. Same shape as FUN_005e1f50 but
 * walks the +8 link field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005e1fa0(void)
{
    

extern int DAT_007f252c;
extern int DAT_007f2534;
extern int DAT_007f2530;
__asm {
mov eax, dword ptr [DAT_007f252c]
        cmp     dword ptr [eax], 0x0
        jz      L_1fe4
        mov eax, dword ptr [DAT_007f2534]
        test    eax, eax
        mov eax, dword ptr [DAT_007f2530]
        jz      L_1fd5
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [ecx + 0x8]
        mov     ecx, edx
        test    ecx, ecx
        mov     dword ptr [eax + 0x8], edx
        jz      L_1fcc
        cmp     dword ptr [ecx], 0x0
        jnz     L_1fd5
L_1fcc:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], edx
L_1fd5:
        mov     eax, dword ptr [eax + 0x8]
        test    eax, eax
        jz      L_1fe4
        mov     eax, dword ptr [eax]
        mov dword ptr [DAT_007f2534], eax
        ret
L_1fe4:
        xor     eax, eax
        mov dword ptr [DAT_007f2534], eax
        ret
    }


}
