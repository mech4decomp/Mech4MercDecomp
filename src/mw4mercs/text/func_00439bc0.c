/*
 * FUN_00439bc0 (130 B) — MLR __thiscall. Resizes a byte buffer at this+0/+4
 * and copies source data into it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00439bc0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        mov     ebx, dword ptr [eax+4]
        test    ebx, ebx
        push    esi
        push    edi
        mov     edi, ecx
        jbe     L_439c26
        mov     esi, dword ptr [eax]
        cmp     ebx, dword ptr [edi+4]
        jz      L_439c09
        test    ebx, ebx
        mov     eax, dword ptr [edi]
        jbe     L_439bfa
        test    eax, eax
        jz      L_439bea
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_439bea:
        push    ebx
        mov     dword ptr [edi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [edi], eax
        jmp     L_439c09
L_439bfa:
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
L_439c09:
        mov     ecx, dword ptr [edi+4]
        test    ecx, ecx
        jbe     L_439c3c
        mov     edi, dword ptr [edi]
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        pop     ebx
        ret     4
L_439c26:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_439c3c
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi+4], 0
L_439c3c:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
