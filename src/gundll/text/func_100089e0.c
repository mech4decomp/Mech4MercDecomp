/*
 * FUN_100089e0 (129 B) - __stdcall, RET 0x8.  Reads a pointer from
 * arg0->+0xc; if null returns 0xc1120405.  Otherwise calls vtable[7] on it
 * to fetch a value, and if >= 0, fills the output struct (arg1) with
 * packed fields from the stack args and calls the IAT slot 0x100491d4
 * (sprintf-family) with a format string at 0x1005021c.  Returns the value.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491d4;   /* IAT/function-pointer table slot */

__declspec(naked) void __stdcall FUN_100089e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0xc]
        sub     esp, 8
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        jne     loc_100089ff
        pop     esi
        mov     eax, 0xc1120405
        pop     ebx
        add     esp, 8
        ret     8
loc_100089ff:
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x1c]
        mov     esi, eax
        cmp     esi, ebx
        jl      loc_10008a57
        mov     eax, dword ptr [esp + 0x18]
        mov     cx, word ptr [esp + 0xc]
        mov     word ptr [eax + 0x12], cx
        mov     ecx, dword ptr [esp + 0xa]
        xor     edx, edx
        mov     dl, ch
        movzx   ecx, cl
        mov     word ptr [eax], bx
        mov     byte ptr [eax + 2], bl
        mov     byte ptr [eax + 3], bl
        push    edx
        movzx   edx, byte ptr [esp + 0xd]
        push    ecx
        movzx   ecx, byte ptr [esp + 0x10]
        push    edx
        push    ecx
        mov     byte ptr [eax + 4], bl
        mov     byte ptr [eax + 5], bl
        add     eax, 0x14
        push    0x1005021c
        push    eax
        call    dword ptr [g_100491d4]
        add     esp, 0x18
loc_10008a57:
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     8
    }
}
