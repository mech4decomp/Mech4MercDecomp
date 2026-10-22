/*
 * FUN_00629440 (910 B) — __fastcall (ECX = param_1), RET 0, returns param_1.
 *
 * Constructor for a HUD/mech display object: sets vtable pointer, builds
 * several sub-objects via FUN_00560190/FUN_00560420, and initializes
 * their geometry via FUN_005603e0/FUN_00560400.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_0062baa0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);

extern void *g_7ddde0;          /* global pointer @ 0x7ddde0 */
extern void *g_7dab44;          /* global object pointer @ 0x7dab44 */
extern void *g_7dab40;          /* xor key @ 0x7dab40 */
extern void *g_78d0a4;          /* vtable pointer @ 0x78d0a4 */

__declspec(naked) void *__cdecl FUN_00629440(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     ecx, [esi + 0x50]
        call    FUN_0062baa0
        xor     ebp, ebp
        lea     edx, [esp + 0x1c]
        mov     dword ptr [esi + 0x60], ebp
        push    edx
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esi], offset g_78d0a4
        mov     dword ptr [esi + 0x64], ebp
        mov     dword ptr [esp + 0x20], 0x43200000
        mov     dword ptr [esp + 0x24], 0x42c80000
        mov     dword ptr [esp + 0x28], 0x3f666666
        call    FUN_0040c410
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esp + 0x20], 0x43f00000
        mov     dword ptr [esp + 0x24], 0x43960000
        mov     dword ptr [esp + 0x28], 0x3f666666
        call    FUN_0040c410
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     edi, dword ptr [edx + 0xc]
        push    0x138
        mov     dword ptr [esi + 0x34], 0xff009600
        xor     edi, 0x85739531
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_294f8
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        mov     dword ptr [esp + 0x18], ebx
        jmp     L_294fe
    L_294f8:
        mov     dword ptr [esp + 0x18], ebp
        mov     ebx, ebp
    L_294fe:
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x2d6
        mov     ecx, edi
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [ebx + 0x10c], ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     dword ptr [ebx + 0x104], 0xffffffff
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_29551
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        jmp     L_29557
    L_29551:
        mov     dword ptr [esp + 0x14], ebp
        mov     ebx, ebp
    L_29557:
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x2d7
        mov     ecx, edi
        mov     dword ptr [esi + 0x6c], ebx
        mov     dword ptr [ebx + 0x10c], ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     dword ptr [ebx + 0x104], 0xffffffff
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_295a6
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     L_295a8
    L_295a6:
        xor     ebx, ebx
    L_295a8:
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x2db
        mov     ecx, edi
        mov     dword ptr [esi + 0x80], ebx
        mov     dword ptr [ebx + 0x10c], ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     dword ptr [ebx + 0x104], 0xffffffff
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_295fa
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     L_295fc
    L_295fa:
        xor     ebx, ebx
    L_295fc:
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x2dc
        mov     ecx, edi
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [ebx + 0x10c], ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     dword ptr [ebx + 0x104], 0xffffffff
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_2964e
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     L_29650
    L_2964e:
        xor     ebx, ebx
    L_29650:
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x303
        mov     ecx, edi
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [ebx + 0x10c], ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     dword ptr [ebx + 0x104], 0xffffffff
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_296a2
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     L_296a4
    L_296a2:
        xor     ebx, ebx
    L_296a4:
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x2df
        mov     ecx, edi
        mov     dword ptr [esi + 0x8c], ebx
        mov     dword ptr [ebx + 0x10c], ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        or      edi, 0xffffffff
        mov     dword ptr [ebx + 0x104], edi
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_296f5
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     L_296f7
    L_296f5:
        xor     ebx, ebx
    L_296f7:
        mov     dword ptr [ebx + 0x10c], ebp
        mov     dword ptr [ebx + 0x104], edi
        mov     eax, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        mov     dword ptr [esi + 0x70], ebx
        call    dword ptr [eax + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_2972c
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     L_2972e
    L_2972c:
        xor     edi, edi
    L_2972e:
        mov     dword ptr [edi + 0x10c], ebp
        mov     dword ptr [edi + 0x104], 0xffffffff
        mov     edx, dword ptr [edi]
        push    0x2
        mov     ecx, edi
        mov     dword ptr [esi + 0x7c], edi
        call    dword ptr [edx + 0x4]
        push    ebp
        mov     dword ptr [esi + 0x74], ebp
        push    ebp
        mov     ecx, ebx
        mov     dword ptr [esi + 0x78], 0xbff00000
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, ebx
        call    FUN_00560400
        push    ebp
        push    ebp
        mov     ecx, edi
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, edi
        call    FUN_00560400
        mov     edi, dword ptr [esp + 0x14]
        push    ebp
        push    ebp
        mov     ecx, edi
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, edi
        call    FUN_00560400
        mov     edi, dword ptr [esp + 0x18]
        push    ebp
        push    ebp
        mov     ecx, edi
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, edi
        call    FUN_00560400
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
