/*
 * FUN_006D1660 (101 B) — Iterate objects, match type 0x68, set fields.
 *
 * __cdecl, 2 stack params (param_1, param_2). Calls vtable[0x38] on
 * param_1 with arg 0, iterates result->field_1c times, calls
 * FUN_00487E30 for each index. If the result's type (+4) == 0x68,
 * stores it in param_2's array and sets bytes at +0x18b/+0x18c to 3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00487e30(int);

__declspec(naked) void __cdecl FUN_006d1660(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    0
        call    dword ptr [eax + 0x38]
        mov     ebx, eax
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x1c]
        xor     ebp, ebp
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jle     l_done
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
    l_loop:
        push    ebp
        mov     ecx, ebx
        call    FUN_00487e30
        mov     ecx, dword ptr [eax + 4]
        cmp     dword ptr [ecx], 0x68
        jnz     l_next
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edi]
        mov     dword ptr [ecx + edx*4], eax
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [edx + eax*4]
        inc     eax
        mov     byte ptr [ecx + 0x18b], 3
        mov     byte ptr [ecx + 0x18c], 3
        mov     dword ptr [esi], eax
    l_next:
        mov     eax, dword ptr [esp + 0x14]
        inc     ebp
        cmp     ebp, eax
        jl      l_loop
        pop     edi
        pop     esi
    l_done:
        pop     ebp
        pop     ebx
        ret
    }
}
