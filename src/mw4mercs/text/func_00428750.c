/*
 * FUN_00428750 (183 B) — MLR vertex-buffer resize/realloc. __thiscall, RET 0x4.
 * Reallocates the vertex array (16-byte elements) to hold `param_1` entries,
 * copying old data and freeing the old buffer.
 *
 * CFLAGS: /O1
 * Match: target
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00428750(void)
{
    __asm {
        push    ecx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     ebp, edi
        mov     dword ptr [esp + 0xc], esi
        jz      L_428800
        test    ebp, ebp
        jbe     L_4287ec
        mov     eax, ebp
        shl     eax, 0x4
        push    ebx
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_42878b
        lea     ecx, [ebp - 0x1]
        mov     dword ptr [esp + 0x18], ecx
        mov     ebx, eax
        jmp     L_42878d
L_42878b:
        xor     ebx, ebx
L_42878d:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      L_4287d9
        cmp     ebp, edi
        mov     edx, ebp
        jc      L_42879b
        mov     edx, edi
L_42879b:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_4287d0
        mov     ecx, edx
        shl     ecx, 0x4
        lea     eax, [ecx + esi*0x1]
        lea     ecx, [ecx + ebx*0x1 + 0x8]
        inc     edx
L_4287af:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 0x8], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx - 0x4], edi
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x4], edi
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_4287af
L_4287d0:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4287d9:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], ebx
        pop     ebx
        mov     esi, ecx
        pop     edi
        mov     dword ptr [esi + 0x4], ebp
        pop     esi
        pop     ebp
        pop     ecx
        ret     0x4
L_4287ec:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi + 0x4], ebp
L_428800:
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret     0x4
    }
}
