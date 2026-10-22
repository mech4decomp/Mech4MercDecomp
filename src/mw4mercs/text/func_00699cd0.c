/*
 * FUN_00699cd0 (107 B) — Object initializer (__fastcall, ECX = this).
 *
 * Builds a small object at `this`: stores a flag byte (high byte of the
 * this pointer) into several fields, allocates two 0x28-byte blocks via
 * FUN_004084d0, links them into the object, calls FUN_0069a260, and
 * records the object in global g_0082db24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int a);
extern void __cdecl FUN_0069a260(void);

extern void *g_0082db24;   /* 0x0082DB24 */

__declspec(naked) void *__fastcall FUN_00699cd0(void *param1)
{
    __asm {
        push    ecx
        mov     al, byte ptr [esp + 3]
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        xor     ebx, ebx
        lea     edi, [esi + 4]
        mov     byte ptr [esi], bl
        mov     byte ptr [edi], al
        push    0x28
        mov     dword ptr [edi], ebx
        call    FUN_004084d0
        mov     cl, byte ptr [esp + 0x13]
        mov     byte ptr [edi + 8], cl
        add     esp, 4
        mov     ecx, edi
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 4], ebx
        call    FUN_0069a260
        mov     dl, byte ptr [esp + 0xf]
        mov     byte ptr [esi + 0x10], dl
        push    0x28
        mov     dword ptr [esi + 0x10], ebx
        call    FUN_004084d0
        mov     cl, byte ptr [esp + 0x13]
        mov     dword ptr [eax + 4], ebx
        add     esp, 4
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [esi + 0x10], eax
        mov     byte ptr [eax], bl
        pop     edi
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [eax + 0xc], eax
        mov     byte ptr [esi + 0x18], cl
        mov     dword ptr [g_0082db24], esi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
