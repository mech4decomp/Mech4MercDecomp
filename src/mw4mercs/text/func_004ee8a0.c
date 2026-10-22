/*
 * FUN_004ee8a0 (79 B) — cdecl factory. Allocates 0x20 bytes; on success
 * constructs an object (FUN_004d5c10) into 0x7dc80c and zeroes 0x7dc808,
 * else zeroes both.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern int g_007dc83c;
extern int g_00774be0;
extern void __cdecl FUN_004d5c10(void);
extern int g_007dc80c;
extern int g_007dc808;

__declspec(naked) void FUN_004ee8a0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_004ee8da
        mov     ecx, dword ptr [g_007dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_00774be0
        push    0x224
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc80c], eax
        mov     dword ptr [g_007dc808], 0
        ret
L_004ee8da:
        mov     dword ptr [g_007dc80c], 0
        mov     dword ptr [g_007dc808], 0
        ret
    }
}
