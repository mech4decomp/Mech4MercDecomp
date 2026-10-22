/*
 * FUN_5e0025f0 (138 B) — __thiscall (ECX=this) destructor. Sets vtable
 * pointers, calls sub-constructors FUN_5e0026a0 / FUN_5e002b70, releases two
 * COM-style objects at +0x41e8/+0x41e0 (vtable slot 2), then tears down
 * sub-objects.
 *
 * __thiscall, RET 0.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e0026a0(void);
extern void __cdecl FUN_5e002b70(void);
extern void __cdecl FUN_5e00e110(void);
extern void __cdecl FUN_5e01e720(void);

extern int g_5e035834;   /* vtable ptr */
extern int g_5e035770;   /* vtable ptr */

__declspec(naked) void __stdcall FUN_5e0025f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    0x0
        lea     edi, [esi + 0x4]
        push    0x0
        push    edi
        mov     dword ptr [esi], OFFSET g_5e035834
        mov     dword ptr [edi], OFFSET g_5e035770
        call    FUN_5e0026a0
        push    0x0
        push    0x0
        push    edi
        call    FUN_5e002b70
        mov     eax, dword ptr [esi + 0x41e8]
        test    eax, eax
        jz      L_631
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x41e8], 0x0
L_631:
        mov     eax, dword ptr [esi + 0x41e0]
        test    eax, eax
        jz      L_64b
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x41e0], 0x0
L_64b:
        lea     ecx, [esi + 0x4304]
        call    FUN_5e00e110
        lea     ecx, [esi + 0x427c]
        call    FUN_5e00e110
        lea     ecx, [esi + 0x41f4]
        call    FUN_5e00e110
        lea     ecx, [esi + 0x400c]
        call    FUN_5e01e720
        pop     edi
        pop     esi
        ret
    }
}
