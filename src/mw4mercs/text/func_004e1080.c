/*
 * FUN_004e1080 (130 B) — MLR/Adept "VideoRenderer" destructor (__thiscall).
 * Tears down the renderer object, frees the global texture-cache object,
 * and resets globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004f32f0(void);

extern int g_007dab44;
extern int g_007dab40;
extern int g_007dc7fc;

__declspec(naked) void FUN_004e1080(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx+8]
        xor     edx, 0x85739531
        lea     eax, [ecx+8]
        push    edi
        mov     dword ptr [esi], 0x773bc8
        jz      L_10c1
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      L_10b7
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_10b7:
        push    2
        call    FUN_004c8e90
        add     esp, 4
L_10c1:
        mov     ecx, dword ptr [g_007dc7fc]
        call    FUN_004179f0
        mov     edi, dword ptr [g_007dc7fc]
        test    edi, edi
        jz      L_10e6
        mov     ecx, edi
        call    FUN_00417980
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_10e6:
        lea     ecx, [esi+0x50]
        mov     dword ptr [g_007dc7fc], 0
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_004f32f0
        pop     edi
        pop     esi
        ret
    }
}
