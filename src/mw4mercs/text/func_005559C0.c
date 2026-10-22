/*
 * FUN_005559C0 (150 B) — Checks state flags, calls a capability check,
 * then increments/decrements a counter at [this+0x488] and triggers
 * callbacks based on the counter value.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_0061acf0(int);
extern int __stdcall FUN_0061ad20(int);
extern void __stdcall FUN_0054c4d0(int);
extern void __stdcall FUN_00559be0(int);

__declspec(naked) void __stdcall FUN_005559C0(int param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     loc_ret
        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      loc_ret
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        mov     ecx, dword ptr [esi + 0x488]
        jle     loc_decrement
        inc     ecx
        mov     eax, ecx
        cmp     eax, 0x1
        mov     dword ptr [esi + 0x488], ecx
        jnz     loc_ret
        push    0x4
        mov     ecx, esi
        call    FUN_0054c4d0
        pop     esi
        ret     0x4
loc_decrement:
        dec     ecx
        mov     eax, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x488], ecx
        jg      loc_ret
        push    0x5
        mov     ecx, esi
        mov     dword ptr [esi + 0x488], 0x0
        call    FUN_0054c4d0
        push    0x1b
        mov     ecx, esi
        call    FUN_00559be0
loc_ret:
        pop     esi
        ret     0x4
    }
}
