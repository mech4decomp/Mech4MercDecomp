/*
 * FUN_10008c00 (138 B) - __stdcall, RET 0x14.  Initializes an object
 * (esi): zeroes +0x10, optionally calls vtable[0] on arg3, then maps
 * arg4 (0..2) to an HRESULT (0 / 0xc1120401 / 0x80070005), zeroes the
 * object at esi-0xc and calls vtable[1] on it, and if arg4 != 0 calls
 * vtable[0] on the object at esi-0x10 with a 1.  (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008c00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        xor     ebx, ebx
        push    edi
        xor     edi, edi
        cmp     eax, ebx
        mov     dword ptr [esi + 0x10], ebx
        je      loc_10008c2b
        lea     ecx, [esi - 0x10]
        test    ecx, ecx
        je      loc_10008c22
        lea     ecx, [esi + 8]
        jmp     loc_10008c24
loc_10008c22:
        xor     ecx, ecx
loc_10008c24:
        mov     edx, dword ptr [eax]
        push    ebx
        push    ecx
        push    eax
        call    dword ptr [edx]
loc_10008c2b:
        cmp     byte ptr [esi - 2], bl
        jne     loc_10008c84
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        mov     eax, ebp
        sub     eax, ebx
        je      loc_10008c4f
        dec     eax
        je      loc_10008c48
        dec     eax
        jne     loc_10008c51
        mov     edi, 0x80070005
        jmp     loc_10008c51
loc_10008c48:
        mov     edi, 0xc1120401
        jmp     loc_10008c51
loc_10008c4f:
        xor     edi, edi
loc_10008c51:
        mov     eax, dword ptr [esi - 0xc]
        cmp     eax, ebx
        je      loc_10008c75
        cmp     ebp, ebx
        je      loc_10008c6b
        mov     dword ptr [eax + 4], ebx
        mov     eax, dword ptr [esi - 0xc]
        mov     dword ptr [eax + 8], ebx
        mov     ecx, dword ptr [esi - 0xc]
        mov     dword ptr [ecx + 0xc], ebx
loc_10008c6b:
        mov     eax, dword ptr [esi - 0xc]
        mov     edx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [edx + 4]
loc_10008c75:
        cmp     ebp, ebx
        pop     ebp
        je      loc_10008c84
        mov     eax, dword ptr [esi - 0x10]
        lea     ecx, [esi - 0x10]
        push    1
        call    dword ptr [eax]
loc_10008c84:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
