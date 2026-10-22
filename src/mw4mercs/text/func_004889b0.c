/*
 * FUN_004889b0 (485 B) __thiscall: resize the d4/d8 (int*) and dc/e0
 * (16-byte struct*) growable arrays to a new capacity; returns the
 * element at index param_1.
 *
 * CFLAGS: /O1
 */

extern int g_007da734;
extern int g_007b957c;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004889b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [ebp+8]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xd8]
        cmp     ebx, eax
        push    edi
        jl      loc_488b83
        lea     edi, [eax+eax*1]
        cmp     edi, dword ptr [g_007da734]
        mov     dword ptr [ebp-8], edi
        jle     loc_4889ec
        push    0x76fd20
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      loc_4889ec
        int     3
loc_4889ec:
        mov     eax, dword ptr [g_007b957c]
        push    eax
        call    FUN_006f4950
        cmp     edi, dword ptr [esi+0xd8]
        jz      loc_488a88
        test    edi, edi
        jbe     loc_488a69
        lea     ecx, [edi*4+0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esi+0xd4]
        add     esp, 4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [ebp-4], ebx
        jz      loc_488a5e
        mov     ecx, dword ptr [esi+0xd8]
        cmp     edi, ecx
        jnc     loc_488a32
        mov     ecx, edi
loc_488a32:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      loc_488a4f
        lea     eax, [ebx+ecx*4]
        sub     edx, ebx
        inc     ecx
loc_488a3f:
        mov     ebx, dword ptr [edx+eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      loc_488a3f
        mov     ebx, dword ptr [ebp-4]
loc_488a4f:
        mov     eax, dword ptr [esi+0xd4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_488a5e:
        mov     dword ptr [esi+0xd4], ebx
        mov     ebx, dword ptr [ebp+8]
        jmp     loc_488a82
loc_488a69:
        mov     ecx, dword ptr [esi+0xd4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0xd4], 0
loc_488a82:
        mov     dword ptr [esi+0xd8], edi
loc_488a88:
        cmp     edi, dword ptr [esi+0xe0]
        jz      loc_488b3f
        test    edi, edi
        jbe     loc_488b20
        mov     edx, edi
        shl     edx, 4
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi+0xdc]
        add     esp, 4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [ebp-0xc], ebx
        jz      loc_488b15
        mov     ecx, dword ptr [esi+0xe0]
        cmp     edi, ecx
        jnc     loc_488ac5
        mov     ecx, edi
loc_488ac5:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      loc_488b06
        mov     eax, ecx
        shl     eax, 4
        sub     edx, ebx
        add     eax, ebx
        mov     dword ptr [ebp-4], edx
        inc     ecx
        jmp     loc_488ade
loc_488adb:
        mov     edx, dword ptr [ebp-4]
loc_488ade:
        add     edx, eax
        mov     ebx, dword ptr [edx]
        mov     edi, eax
        mov     dword ptr [edi], ebx
        mov     ebx, dword ptr [edx+4]
        mov     dword ptr [edi+4], ebx
        mov     ebx, dword ptr [edx+8]
        mov     dword ptr [edi+8], ebx
        mov     edx, dword ptr [edx+0xc]
        dec     ecx
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [edi+0xc], edx
        ja      loc_488adb
        mov     edi, dword ptr [ebp-8]
        mov     ebx, dword ptr [ebp-0xc]
loc_488b06:
        mov     eax, dword ptr [esi+0xdc]
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_488b15:
        mov     dword ptr [esi+0xdc], ebx
        mov     ebx, dword ptr [ebp+8]
        jmp     loc_488b39
loc_488b20:
        mov     eax, dword ptr [esi+0xdc]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0xdc], 0
loc_488b39:
        mov     dword ptr [esi+0xe0], edi
loc_488b3f:
        call    FUN_006f49a0
        test    edi, edi
        jle     loc_488b71
        mov     ecx, dword ptr [esi+0xd4]
        mov     eax, dword ptr [esi+0xdc]
loc_488b54:
        mov     dword ptr [ecx], eax
        add     eax, 0x10
        add     ecx, 4
        dec     edi
        jnz     loc_488b54
        mov     ecx, dword ptr [esi+0xd4]
        mov     eax, dword ptr [ecx+ebx*4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
loc_488b71:
        mov     edx, dword ptr [esi+0xd4]
        mov     eax, dword ptr [edx+ebx*4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
loc_488b83:
        mov     eax, dword ptr [esi+0xd4]
        mov     eax, dword ptr [eax+ebx*4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
