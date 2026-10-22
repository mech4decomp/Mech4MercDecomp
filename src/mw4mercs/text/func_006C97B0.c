/*
 * FUN_006C97B0 (359 B, __stdcall RET 0x1c) - in-.text data block transcription
 * (wave U). Reads a texture header, allocates a 0x28-byte object
 * (FUN_004084C0), initializes it (FUN_006C8950), processes a palette/index
 * array (FUN_006CA110) and deduplicates runs, then releases the object via
 * its vtable.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int  g_0082e22c;
extern int *g_0076b420;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_006c8950(void);
extern void __cdecl FUN_006ca110(void);

__declspec(naked) void FUN_006C97B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        sub     esp, 0x8c
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [g_0082e22c]
        push    eax
        push    0x28
        call    FUN_004084c0
        xor     ebx, ebx
        add     esp, 0x14
        cmp     eax, ebx
        je      L6c97f9
        push    1
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, eax
        call    FUN_006c8950
        mov     dword ptr [esp + 0x10], eax
        jmp     L6c97fd
    L6c97f9:
        mov     dword ptr [esp + 0x10], ebx
    L6c97fd:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 4]
        mov     ecx, dword ptr [eax + 8]
        push    edx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0xb8]
        push    edx
        push    eax
        push    ecx
        call    FUN_006ca110
        mov     eax, dword ptr [esp + 0xb8]
        mov     edi, dword ptr [esp + 0xb4]
        cdq
        and     edx, 3
        add     eax, edx
        xor     ebp, ebp
        mov     dword ptr [esp + 0x18], edi
        sar     eax, 2
    L6c983b:
        mov     dword ptr [esp + 0x14], edi
        add     edi, 4
        cmp     ebx, eax
        mov     dword ptr [esp + 0xb4], edi
        jge     L6c9883
        mov     esi, dword ptr [esp + 0xb0]
        mov     edx, dword ptr [esp + 0xac]
        lea     ecx, [esi + ebx*4]
        sub     edx, esi
    L6c9860:
        mov     esi, dword ptr [ecx]
        cmp     esi, dword ptr [edx + ecx]
        jne     L6c9870
        inc     ebp
        inc     ebx
        add     ecx, 4
        cmp     ebx, eax
        jl      L6c9860
    L6c9870:
        cmp     ebp, 1
        jle     L6c9883
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        je      L6c98ee
        jmp     L6c983b
    L6c9883:
        sub     ebx, ebp
        test    ebp, ebp
        jle     L6c98ac
        mov     ecx, dword ptr [esp + 0xb0]
        mov     edx, dword ptr [esp + 0xb4]
        lea     esi, [ecx + ebx*4]
        mov     ecx, ebp
        rep movsd
        lea     ecx, [edx + ebp*4]
        mov     dword ptr [esp + 0xb4], ecx
        add     ebx, ebp
        mov     edi, ecx
    L6c98ac:
        cmp     ebx, eax
        jge     L6c98d8
        mov     edx, dword ptr [esp + 0xb0]
        mov     esi, dword ptr [esp + 0xac]
        lea     ecx, [edx + ebx*4]
        sub     esi, edx
    L6c98c3:
        mov     edx, dword ptr [ecx]
        cmp     edx, dword ptr [ecx + esi]
        je      L6c98d8
        inc     ebp
        mov     dword ptr [edi], edx
        add     edi, 4
        inc     ebx
        add     ecx, 4
        cmp     ebx, eax
        jl      L6c98c3
    L6c98d8:
        mov     ecx, dword ptr [esp + 0x14]
        add     ebp, 0x1000000
        mov     dword ptr [ecx], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        jne     L6c983b
    L6c98ee:
        mov     ecx, dword ptr [esp + 0x10]
        add     edi, 4
        test    ecx, ecx
        je      L6c98ff
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    L6c98ff:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, edi
        pop     edi
        pop     esi
        sub     eax, edx
        pop     ebp
        sub     eax, 4
        pop     ebx
        add     esp, 0x8c
        ret     0x1c
    }
}
