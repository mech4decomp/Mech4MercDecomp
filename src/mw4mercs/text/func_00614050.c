/*
 * FUN_00614050 (101 B) — Table object constructor/initializer.
 *
 * Allocates a 0xc-byte object, links it to a "Table" node, and walks a
 * linked list calling FUN_00613e90() on each non-null key.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0040ed60(void *str);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00613e90(int key, int param);

__declspec(naked) void FUN_00614050(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        push    0x78c2b4
        call    FUN_0040ed60
        push    0xc
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_85
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     esi, eax
        jmp     L_87
    L_85:
        xor     esi, esi
    L_87:
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x8], eax
    L_93:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_b2
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x8], edx
        jz      L_b2
        push    edi
        push    ecx
        call    FUN_00613e90
        add     esp, 0x8
        jmp     L_93
    L_b2:
        pop     edi
        pop     esi
        ret
    }
}
