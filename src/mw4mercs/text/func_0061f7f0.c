/*
 * FUN_0061f7f0 (269 B) — Vector insert/append routine using global
 * container at 0x8058b8 (identical structure to FUN_0061f270, but
 * element size 4 instead of 8).
 *
 * __thiscall (ECX = this = EDI), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ef00(void);
extern void * __cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);

extern int g_8058b8;

__declspec(naked) void __stdcall FUN_0061f7f0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [g_8058b8]
        mov     eax, dword ptr [ebx + 0xc]
        push    ebp
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x4], ebp
        jz      L_61f8e5
        push    esi
        push    eax
        lea     eax, [ecx*4]
        push    eax
        call    FUN_006f3c80
        mov     esi, dword ptr [ebx + 0x14]
        cmp     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x20], eax
        jz      L_61f845
        cmp     esi, ebp
        jz      L_61f839
        mov     dword ptr [esi], eax
L_61f839:
        add     esi, 4
        mov     dword ptr [ebx + 0x14], esi
        pop     esi
        jmp     L_61f8e7
L_61f845:
        mov     edi, dword ptr [ebx + 0x10]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_61f868
        lea     ecx, [esp + 0x14]
L_61f868:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_61f880
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
L_61f880:
        mov     edx, dword ptr [esp + 0x20]
        push    0
        push    edx
        push    ebp
        push    esi
        push    edi
        call    FUN_0061ef00
        add     esp, 0x14
        test    eax, eax
        jz      L_61f89c
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], ecx
L_61f89c:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     edi, eax
        jle     L_61f8b9
        sub     esi, eax
L_61f8ae:
        mov     edx, dword ptr [esi + edi]
        mov     dword ptr [edi], edx
        add     edi, 4
        dec     ecx
        jnz     L_61f8ae
L_61f8b9:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        jz      L_61f8c9
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_61f8c9:
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0x14], edi
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x10], ebp
        mov     dword ptr [ebx + 0x18], ecx
        pop     esi
        jmp     L_61f8e7
L_61f8e5:
        xor     eax, eax
L_61f8e7:
        xor     edx, edx
        test    eax, eax
        setnz   dl
        mov     dword ptr [edi + 0x8], eax
        pop     edi
        pop     ebp
        pop     ebx
        dec     edx
        mov     eax, edx
        add     esp, 0xc
        ret     4
    }
}
