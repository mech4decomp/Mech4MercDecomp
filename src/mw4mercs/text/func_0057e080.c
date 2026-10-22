/*
 * FUN_0057E080 (109 B) — Container iteration helper (method call variant).
 *
 * Takes a container object, iterates through all elements calling a
 * method on each with a global parameter, then frees the iteration buffer.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0057E080(void)
{
    

extern void __cdecl FUN_100566ecd(void);
extern int DAT_007f1f84;
extern void __cdecl FUN_1004151ee(void);
extern void __cdecl FUN_100408485(void);
__asm {
sub     esp, 0x0c
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    0
        lea     eax, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        call FUN_100566ecd
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x0c
        cmp     esi, eax
        je      skip_loop
loop_start:
        mov eax, dword ptr [DAT_007f1f84]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edx + 4]
        push    eax
        call FUN_1004151ee
        mov     eax, dword ptr [esp + 8]
        add     esi, 4
        cmp     esi, eax
        jne     loop_start
        mov     esi, dword ptr [esp + 4]
skip_loop:
        test    esi, esi
        je      done
        push    esi
        call FUN_100408485
        add     esp, 4
done:
        pop     esi
        add     esp, 0x0c
        ret
    }


}
