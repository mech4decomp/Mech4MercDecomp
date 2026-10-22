/*
 * FUN_00602890 (148 B) — __thiscall (ECX = this), RET 0xc (three stack params).
 *
 * Allocates a 0x30-byte object, initializes it from the params and a
 * vtable, stores a double result from FUN_00707e70, and registers it
 * via FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007b8c10;

extern void __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00415180(unsigned int);
extern void __cdecl FUN_00707e70(int);
extern void __cdecl FUN_004179b0(void *);

__declspec(naked) void __stdcall FUN_00602890(void)
{
    __asm {
        push    esi
        push    edi
        push    0x30
        mov     edi, ecx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_2911
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esi], 0x78b3d4
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x8], 0
        push    0
        mov     dword ptr [esi + 0xc], 0
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x20]
        mov     edx, dword ptr [esp + 0x14]
        push    esi
        lea     ecx, [edi + 0x280]
        mov     byte ptr [esi + 0x29], 0
        mov     byte ptr [esi + 0x28], 1
        mov     dword ptr [esi], 0x78b3e4
        mov     dword ptr [esi + 0x2c], edx
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     0xc
    L_2911:
        xor     esi, esi
        push    esi
        lea     ecx, [edi + 0x280]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     0xc
    }
}
