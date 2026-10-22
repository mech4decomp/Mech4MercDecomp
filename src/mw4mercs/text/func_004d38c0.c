/*
 * FUN_004d38c0 (331 B) -- MLR network/server subsystem init/startup.
 * __fastcall (ECX = this).
 *
 * Calls virtual methods on [this+0x4c], sets up event-count/delay globals via
 * FUN_004e05d0, allocates several subsystem objects (FUN_004d2b10,
 * FUN_004d6040, FUN_004d5b10, FUN_004dfdf0, FUN_004dd990) storing results in
 * globals, then invokes a virtual method and tears down.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int a);
extern int __cdecl FUN_004e05d0(int a, const char *b, const char *c);
extern int __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004d2b10(void);
extern int __cdecl FUN_004d6040(int a);
extern void __cdecl FUN_004c8eb0(int a, int b);
extern int __cdecl FUN_004d5b10(int a);
extern void __cdecl FUN_00416990(int a, int b);
extern int __cdecl FUN_004dfdf0(void);
extern int __cdecl FUN_004dd990(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_007dc12c;   /* DAT_007dc12c */
extern int g_007dc6d4;   /* DAT_007dc6d4 */
extern int g_007db0b8;   /* DAT_007db0b8 */
extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_007dc144;   /* DAT_007dc144 */
extern int g_007dc570;   /* DAT_007dc570 */
extern int g_007dc574;   /* DAT_007dc574 */
extern int g_007dc6b4;   /* DAT_007dc6b4 */
extern char g_77294c[];  /* 0x77294c */
extern char g_772938[];  /* 0x772938 */
extern char g_77290c[];  /* vtable ptr @ 0x77290c */
extern char g_7728f8[];  /* vtable ptr @ 0x7728f8 */

__declspec(naked) void __fastcall FUN_004d38c0(int *param_1)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [g_007dc12c]
        push    ecx
        call    FUN_006f4950
        push    offset g_77294c
        push    offset g_772938
        push    0x5
        call    FUN_004e05d0
        push    0x34
        mov     dword ptr [g_007dc6d4], eax
        call    FUN_004084d0
        add     esp, 0x10
        test    eax, eax
        jz      L390D
        mov     ecx, eax
        call    FUN_004d2b10
        mov     dword ptr [g_007db0b8], eax
        jmp     L3917
L390D:
        mov     dword ptr [g_007db0b8], 0x0
L3917:
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jnz     L395F
        push    0x90
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L3952
        mov     edx, dword ptr [g_007dc144]
        push    edx
        mov     ecx, eax
        call    FUN_004d6040
        jmp     L3954
L3952:
        xor     eax, eax
L3954:
        push    0x0
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x8
L395F:
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L39A1
        mov     eax, dword ptr [g_007dc570]
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_004d5b10
        push    0x1
        lea     edi, [esi + 0x10]
        push    0x0
        mov     ecx, edi
        call    FUN_00416990
        mov     dword ptr [edi], offset g_77290c
        mov     dword ptr [esi], offset g_7728f8
        mov     dword ptr [g_007dc574], esi
        pop     edi
        jmp     L39AB
L39A1:
        mov     dword ptr [g_007dc574], 0x0
L39AB:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     esi
        jz      L39C3
        mov     ecx, eax
        call    FUN_004dfdf0
        jmp     L39C5
L39C3:
        xor     eax, eax
L39C5:
        push    0x3b88
        mov     dword ptr [ebx + 0x60], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L39E7
        mov     ecx, eax
        call    FUN_004dd990
        mov     dword ptr [g_007dc6b4], eax
        jmp     L39F1
L39E7:
        mov     dword ptr [g_007dc6b4], 0x0
L39F1:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x2
        call    dword ptr [eax + 0x4]
        call    FUN_006f49a0
        pop     ebx
        ret
    }
}
