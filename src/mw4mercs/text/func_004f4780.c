/*
 * FUN_004f4780 (60 B) — MLR/Adept "Driver::ReceiveDropZoneMessageHandler"
 * (NOT IMPLIMENTED) handler. __thiscall (ECX=this), RET 0x4 (1 arg).
 * Asserts via FUN_006fab90, then calls FUN_004daa20 and a virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006fab90(void);
extern void FUN_004daa20(void);

__declspec(naked) void FUN_004f4780(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x775340
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L4798
        int     3
L4798:
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [esi+0x170]
        push    eax
        mov     byte ptr [esi+0x168], 0x1
        call    FUN_004daa20
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx+0x48]
        pop     esi
        pop     ebp
        ret     0x4
    }
}
