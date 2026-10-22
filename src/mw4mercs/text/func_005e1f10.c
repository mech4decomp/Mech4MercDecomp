/*
 * FUN_005e1f10 (62 B) — __fastcall (ECX = param). Removes a node from a
 * linked list rooted at DAT_007f2530, clears DAT_007f2534 if it matches,
 * then calls FUN_004154d0(DAT_007f252c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004154d0(void *p);

__declspec(naked) void FUN_005e1f10(void)
{
    

extern int DAT_007f2530;
extern int DAT_007f2534;
extern int DAT_007f252c;
__asm {
mov edx, dword ptr [DAT_007f2530]
        mov     eax, dword ptr [edx + 0x8]
        test    eax, eax
        jz      L_1f21
        mov     eax, dword ptr [eax]
        jmp     L_1f23
L_1f21:
        xor     eax, eax
L_1f23:
        cmp     eax, ecx
        jnz     L_1f2f
        mov     eax, dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax]
        mov     dword ptr [edx + 0x8], eax
L_1f2f:
        cmp dword ptr [DAT_007f2534], ecx
        jnz     L_1f41
        mov dword ptr [DAT_007f2534], 0x0
L_1f41:
        mov edx, dword ptr [DAT_007f252c]
        push    edx
        call    FUN_004154d0
        ret
    }


}
