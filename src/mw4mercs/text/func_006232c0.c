/*
 * FUN_006232c0 (139 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Scans an array at this+0x2ac..this+0x2b0 for an element whose object
 * matches param_1 (byte at +0x18 and short at +0x1a). On match, calls
 * FUN_00621930(obj+0x14) and removes the element from the array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00621930(void *p);

__declspec(naked) void __stdcall FUN_006232c0(void *param)
{
    __asm {
        push    ecx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x2b0]
        push    esi
        mov     esi, dword ptr [ebp + 0x2ac]
        cmp     esi, eax
        jz      L_23345
        mov     eax, dword ptr [esp + 0x10]
        mov     cl, byte ptr [eax]
        push    ebx
        push    edi
        mov     byte ptr [esp + 0x13], cl
        lea     edi, [esi + 0x4]
L_232e4:
        mov     eax, dword ptr [esi]
        mov     dl, byte ptr [esp + 0x13]
        cmp     byte ptr [eax + 0x18], dl
        jnz     L_23335
        mov     cx, word ptr [eax + 0x1a]
        mov     edx, dword ptr [esp + 0x18]
        cmp     cx, word ptr [edx + 0x2]
        jnz     L_23335
        mov     eax, dword ptr [eax + 0x14]
        push    eax
        mov     ecx, ebp
        call    FUN_00621930
        mov     edx, dword ptr [ebp + 0x2b0]
        cmp     edi, edx
        jz      L_2332a
        mov     eax, edx
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, esi
        jle     L_2332a
L_2331f:
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], ebx
        add     ecx, 0x4
        dec     eax
        jnz     L_2331f
L_2332a:
        add     edx, -0x4
        mov     dword ptr [ebp + 0x2b0], edx
        jmp     L_2333b
L_23335:
        add     esi, 0x4
        add     edi, 0x4
L_2333b:
        cmp     esi, dword ptr [ebp + 0x2b0]
        jnz     L_232e4
        pop     edi
        pop     ebx
L_23345:
        pop     esi
        pop     ebp
        pop     ecx
        ret     0x4
    }
}
