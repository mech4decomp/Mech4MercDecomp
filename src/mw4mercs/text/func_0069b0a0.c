/*
 * FUN_0069b0a0 (73 B) — String-type object factory.
 *
 * __cdecl (one param). Allocates via FUN_0064fd60; on failure logs an
 * error via FUN_00562f10. Fills the new object's fields (type 3, sizes,
 * two global pointers) and returns it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0064fd60(void);
extern void __cdecl FUN_00562f10(int param1, const char *param2);

extern int DAT_0080d9bc;
extern int DAT_0080d9b8;

__declspec(naked) void *__cdecl FUN_0069b0a0(int param_1)
{
    __asm {
        push    esi
        call    FUN_0064fd60
        mov     esi, eax
        test    esi, esi
        jnz     l_skip
        push    0x79984c
        push    eax
        call    FUN_00562f10
        add     esp, 0x8
    l_skip:
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [DAT_0080d9bc]
        mov     edx, dword ptr [DAT_0080d9b8]
        mov     dword ptr [esi + 0x8], eax
        inc     eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x4], 0x3
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], edx
        mov     eax, esi
        pop     esi
        ret
    }
}
