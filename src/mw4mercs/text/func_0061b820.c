/*
 * FUN_0061B820 (103 B) — __fastcall constructor.
 *
 * Calls base constructor, allocates two 0x28-byte objects via
 * FUN_0041ee70(), and initializes several fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061af60(void);
extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_0041ee70(int a);

__declspec(naked) void FUN_0061b820(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_0061af60
        push    0x28
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L_843
        push    edi
        mov     ecx, eax
        call    FUN_0041ee70
        jmp     L_845
    L_843:
        xor     eax, eax
    L_845:
        push    0x28
        mov     dword ptr [esi + 0x30], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_860
        push    edi
        mov     ecx, eax
        call    FUN_0041ee70
        jmp     L_862
    L_860:
        xor     eax, eax
    L_862:
        mov     dword ptr [esi + 0x5bf8], edi
        mov     dword ptr [esi + 0x5bfc], edi
        mov     dword ptr [esi + 0x5c00], edi
        mov     dword ptr [esi + 0x5c04], edi
        pop     edi
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x1c], 0x1
        pop     esi
        ret
    }
}
