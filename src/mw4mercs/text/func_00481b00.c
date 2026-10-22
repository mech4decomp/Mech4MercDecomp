/*
 * FUN_00481b00 (152 B) — __thiscall MLR LightMap loader/constructor.
 * Calls FUN_004820b0, sets vtable 0x76f9c8, looks up a "LightMap"
 * resource (FUN_00411bf0), allocates/constructs a 0x24-byte object
 * (FUN_0048fac0/FUN_0048f380/FUN_004084d0/FUN_00422ea0), stores it at
 * this+0x8c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6a0;
extern int g_007da848;
extern void __cdecl FUN_004820b0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00422ea0(void);

__declspec(naked) void FUN_00481b00(void)
{
    __asm {
        mov     eax, dword ptr [g_007da6a0]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004820b0
        push    0x0
        lea     ecx, [esp+0x10]
        push    ecx
        push    0x76e100
        mov     ecx, edi
        mov     dword ptr [esi], 0x76f9c8
        mov     dword ptr [esi+0x8c], 0
        call    FUN_00411bf0
        test    al, al
        jz      L_481b91
        mov     edx, dword ptr [esp+0xc]
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_481b66
        mov     ecx, dword ptr [g_007da848]
        push    eax
        mov     eax, dword ptr [esp+0x10]
        push    eax
        call    FUN_0048f380
        mov     edi, eax
L_481b66:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_481b7e
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_481b80
L_481b7e:
        xor     eax, eax
L_481b80:
        mov     ecx, dword ptr [eax+8]
        inc     ecx
        mov     dword ptr [esi+0x8c], eax
        mov     dword ptr [eax+8], ecx
        or      dword ptr [esi+0x78], 0x40
L_481b91:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
