/*
 * FUN_0059f930 (183 B) — Container population method.
 *
 * Allocates an object, iterates through a container, and populates
 * entries via FUN_00411C80.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(int size);
extern void *__stdcall FUN_0040DCA0(void *this, int a, int b, void *param);
extern void __cdecl FUN_006FAB90(const char *msg);
extern void *__cdecl FUN_0040EDC0(void *this, const char *str);
extern void __cdecl FUN_00416BC0(void *dst, void *src);
extern void *__cdecl FUN_00416CC0(void *this);
extern void __cdecl FUN_004D1F80(void *dst, int arg, void *src);
extern void __cdecl FUN_00411C80(void *this, const char *key, void *value);
extern void __cdecl FUN_004D21C0(void *this);
extern void __cdecl FUN_0040E4A0(void *this);
extern void __cdecl FUN_00416C60(void *this);

__declspec(naked) void __stdcall FUN_0059F930(void *param)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        push    0x50
        mov     edi, ecx
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      alloc_fail
        mov     ecx, dword ptr [ebp + 8]
        push    0
        push    0
        push    ecx
        mov     ecx, eax
        call    FUN_0040DCA0
        mov     ebx, eax
        jmp     after_alloc

alloc_fail:
        xor     ebx, ebx

after_alloc:
        push    0x00783A38
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      assert_ok
        int     3

assert_ok:
        push    0x00783A30
        mov     ecx, ebx
        call    FUN_0040EDC0

        add     edi, 0x34
        push    edi
        lea     ecx, [ebp - 0x14]
        mov     esi, eax
        call    FUN_00416BC0

        lea     ecx, [ebp - 0x14]
        mov     dword ptr [ebp - 0x14], 0x0077A3CC
        call    FUN_00416CC0
        test    eax, eax
        je      loop_done

loop_start:
        push    1
        add     eax, 0x14
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_004D1F80

        mov     edx, dword ptr [ebp - 0x30]
        push    edx
        push    0x00783A28
        mov     ecx, esi
        call    FUN_00411C80

        lea     ecx, [ebp - 0x58]
        call    FUN_004D21C0

        lea     ecx, [ebp - 0x14]
        call    FUN_00416CC0
        test    eax, eax
        jne     loop_start

loop_done:
        mov     ecx, ebx
        call    FUN_0040E4A0

        lea     ecx, [ebp - 0x14]
        call    FUN_00416C60

        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
