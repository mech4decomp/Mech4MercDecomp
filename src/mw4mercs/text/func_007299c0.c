/*
 * FUN_007299c0 (107 B) - Global state initializer.
 *
 * Loads two ints from 0x00858940/0x00858944, converts to float and stores
 * into 0x008816b0/0x008816ac. Zero-fills 0x400 dwords at 0x008806a8 via
 * rep stosd. Clears a set of globals (0x008816c0..0x008816c8,
 * 0x008806a0/0xa4), sets 0x007b7114 = -1, then fills 0x008806b4..0x008816b4
 * (step 0x20) with 1.0f (0x3f800000).
 *
 * __cdecl (RET), no params, returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858940;
extern int g_00858944;
extern float g_008816b0;
extern float g_008816ac;
extern int g_008816c0;
extern int g_008816bc;
extern int g_008806a0;
extern int g_008806a4;
extern int g_008816b8;
extern int g_008816b4;
extern int g_008816c8;
extern int g_007b7114;

__declspec(naked) void __cdecl FUN_007299c0(void)
{
    __asm {
        fild    dword ptr [g_00858940]
        xor     eax, eax
        push    edi
        mov     ecx, 0x400
        fstp    dword ptr [g_008816b0]
        mov     edi, 0x8806a8
        fild    dword ptr [g_00858944]
        rep stosd
        fstp    dword ptr [g_008816ac]
        mov     dword ptr [g_008816c0], eax
        mov     dword ptr [g_008816bc], eax
        mov     dword ptr [g_008806a0], eax
        mov     dword ptr [g_008806a4], eax
        mov     dword ptr [g_008816b8], eax
        mov     dword ptr [g_008816b4], eax
        mov     dword ptr [g_008816c8], eax
        mov     dword ptr [g_007b7114], 0xffffffff
        mov     eax, 0x8806b4
        pop     edi
label_729a1a:
        mov     dword ptr [eax], 0x3f800000
        add     eax, 0x20
        cmp     eax, 0x8816b4
        jl      label_729a1a
        ret
    }
}
