/* FUN_004e6080 - MLR/Adept state engine constructor (192 B) */

extern void __cdecl FUN_004d5b10(int param);
extern void __cdecl FUN_00412a00(void);

__declspec(naked) void FUN_004e6080(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        mov     edi, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x10]
        lea     ebx, [esi + 0x30]
        xor     ebp, ebp
        mov     dword ptr [ebx], ebp
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x7740bc
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x18]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        call    FUN_00412a00
        mov     edx, dword ptr [edi]
        add     esp, 8
        push    4
        lea     eax, [esi + 0x2c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x34]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x44]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x4c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x50]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, 0x3f800000
        mov     dword ptr [esi + 0x48], eax
        mov     dword ptr [esi + 0x20], eax
        pop     edi
        mov     dword ptr [esi + 0x38], ebp
        mov     dword ptr [esi + 0x3c], ebp
        mov     dword ptr [esi + 0x28], ebp
        mov     dword ptr [esi + 0x40], ebp
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
