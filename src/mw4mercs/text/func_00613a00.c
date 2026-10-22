/*
 * FUN_00613a00 (101 B) — __cdecl, two stack params. Looks up a "Table"
 * object, allocates a 0xc-byte node, links it into a list, then walks the
 * list calling FUN_00613880(key, param_2) for each entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_0040ed60(char *name);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00613880(int key, void *param);

__declspec(naked) void FUN_00613a00(void)
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
        jz      L_zero
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     esi, eax
        jmp     L_cont
L_zero:
        xor     esi, esi
L_cont:
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x8], eax
L_loop:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_done
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x8], edx
        jz      L_done
        push    edi
        push    ecx
        call    FUN_00613880
        add     esp, 0x8
        jmp     L_loop
L_done:
        pop     edi
        pop     esi
        ret
    }
}
