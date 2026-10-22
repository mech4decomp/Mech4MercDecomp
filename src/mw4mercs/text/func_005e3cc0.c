/*
 * FUN_005e3cc0 (109 B) — Linked-list validation scan.
 *
 * __stdcall, RET 4 (one stack param). Walks a linked list via
 * [node+0xc4], validating each node against a global-derived
 * signature and a callback (FUN_00415230, __thiscall on [node+4]).
 * Returns 1 if a node with a non-null [node+0x3dc] is found,
 * else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415230(void);

__declspec(naked) int __stdcall FUN_005e3cc0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      ret_zero
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        cmp     esi, edx
        jz      ret_zero
loop_ce5:
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     check_d07
        mov     esi, dword ptr [esi + 0xc4]
        test    esi, esi
        jnz     loop_ce5
ret_zero:
        xor     al, al
        pop     esi
        ret     0x4
check_d07:
        test    esi, esi
        jz      ret_zero
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      ret_zero
        mov     eax, dword ptr [esi + 0x3dc]
        test    eax, eax
        jz      ret_zero
        mov     al, 0x1
        pop     esi
        ret     0x4
    }


}
