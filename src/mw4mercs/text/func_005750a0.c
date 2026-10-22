/* FUN_005750a0 (0x005750A0, 107 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_005750a0(void)
{
    

extern void __cdecl FUN_100566ecd(void);
extern void __cdecl FUN_005fb791(void);
extern void __cdecl FUN_100408487(void);
__asm {
sub     esp, 0xc
        mov     ecx, [esp + 0x10]
        push    esi
        push    0x0
        lea     eax, [esp + 0x8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x18], 0x0
        call FUN_100566ecd
        mov     esi, [esp + 0x10]
        mov     eax, [esp + 0x14]
        add     esp, 0xc
        cmp     esi, eax
        jz      skip_loop
        push    edi
        mov     edi, [esp + 0x1c]
    loop_start:
        mov     ecx, [esi]
        push    edi
        call FUN_005fb791
        mov     eax, [esp + 0xc]
        add     esi, 0x4
        cmp     esi, eax
        jnz     loop_start
        mov     esi, [esp + 0x8]
        pop     edi
    skip_loop:
        test    esi, esi
        jz      skip_free
        push    esi
        call FUN_100408487
        add     esp, 0x4
    skip_free:
        pop     esi
        add     esp, 0xc
        ret
    }


}

#ifdef __cplusplus
}
#endif
