/*
 * FUN_00486be0 (204 B) - MLR global renderer state initializer.
 * Allocates/initializes the global MLREffect object, the vertex pool
 * (DAT_007da718), and the matrix stack (DAT_007da71c), then resizes them.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004869e0(void);

extern int g_007b8c08;
extern int g_007da720;
extern int g_007da718;
extern int g_007da71c;

__declspec(naked) void FUN_00486be0(void)
{
    __asm {
        push    esi
        push    edi
        push    0x14
        call    FUN_004084d0
        xor     esi, esi
        add     esp, 0x4
        cmp     eax, esi
        jz      L_486c0e
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76fc1c
        push    0x4c
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007da720], eax
        jmp     L_486c14
L_486c0e:
        mov     dword ptr [g_007da720], esi
L_486c14:
        push    0x8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, esi
        jz      L_486c44
        push    0x4000
        mov     dword ptr [edi], esi
        mov     dword ptr [edi + 0x4], 0x400
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [edi], eax
        mov     dword ptr [g_007da718], edi
        jmp     L_486c4a
L_486c44:
        mov     dword ptr [g_007da718], esi
L_486c4a:
        push    0x44
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_486c8e
        lea     edi, [eax + 0x4]
        mov     ecx, edi
        mov     dword ptr [eax], 0x2
        lea     eax, [ecx + 0x14]
        mov     edx, 0x2
L_486c6b:
        mov     dword ptr [ecx], esi
        mov     dword ptr [eax - 0x10], esi
        mov     dword ptr [eax - 0xc], esi
        mov     dword ptr [eax - 0x8], esi
        mov     dword ptr [eax - 0x4], esi
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        add     ecx, 0x20
        add     eax, 0x20
        dec     edx
        jnz     L_486c6b
        mov     ecx, edi
        jmp     L_486c90
L_486c8e:
        xor     ecx, ecx
L_486c90:
        mov     dword ptr [g_007da71c], ecx
        call    FUN_004869e0
        mov     edx, dword ptr [g_007da71c]
        lea     ecx, [edx + 0x20]
        call    FUN_004869e0
        pop     edi
        pop     esi
        ret
    }
}
