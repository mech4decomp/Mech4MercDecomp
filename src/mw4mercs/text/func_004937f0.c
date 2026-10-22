/*
 * FUN_004937F0 (58 B) — __fastcall (ECX = this).
 * Destructor body: sets vtable, calls cleanup on this+0x10,
 * decrements refcount on this[1] and frees if zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004179f0(void *param_1);
extern void __fastcall FUN_00417980(void *param_1);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004937f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        _emit 0xC7  /* mov dword ptr [esi], 0x770108 */
        _emit 0x06
        _emit 0x08
        _emit 0x01
        _emit 0x77
        _emit 0x00
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     esi, dword ptr [esi + 4]
        test    esi, esi
        jz      l_done
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_done:
        pop     edi
        pop     esi
        ret
    }
}
