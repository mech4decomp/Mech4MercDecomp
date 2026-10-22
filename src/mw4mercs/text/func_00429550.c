/*
 * FUN_00429550 (352 B) — MLR global teardown. Decrements refcounts on the
 * MLRCulturShape singleton and per-light objects (calling their virtual
 * destructor when the count hits 0), then frees all the buffers allocated
 * by FUN_004292d0 (0x7b9680/84/88/8c/90) and finally destroys the shape
 * singleton via FUN_00429a40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b967c;
extern int g_007b2280;
extern int g_007b9680;
extern int g_007b9684;
extern int g_007b9688;
extern int g_007b968c;
extern int g_007b9690;
extern int g_007b9678;

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00423b20(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_00429930(int param);
extern void __cdecl FUN_004296b0(int param);
extern void __cdecl FUN_004299b0(int param);
extern void __cdecl FUN_004296e0(int param);
extern void __cdecl FUN_00429710(int param);
extern void __cdecl FUN_00429a40(void);

__declspec(naked) void FUN_00429550(void)
{
    __asm {
        mov     ecx, dword ptr [g_007b967c]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      L_29571
        dec     word ptr [ecx+0x10]
        cmp     word ptr [ecx+0x10], di
        jnz     L_29571
        cmp     ecx, edi
        jz      L_29571
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_29571:
        mov     eax, dword ptr [g_007b2280]
        push    esi
        xor     esi, esi
        cmp     eax, edi
        jle     L_295a6
L_2957d:
        mov     ecx, dword ptr [g_007b9680]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx+esi*4]
        dec     word ptr [ecx+8]
        cmp     word ptr [ecx+8], di
        jnz     L_2959c
        cmp     ecx, edi
        jz      L_2959c
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_2959c:
        mov     eax, dword ptr [g_007b2280]
        inc     esi
        cmp     esi, eax
        jl      L_2957d
L_295a6:
        mov     esi, dword ptr [g_007b9680]
        cmp     dword ptr [esi+4], edi
        jz      L_295c1
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+4], edi
L_295c1:
        mov     esi, dword ptr [g_007b9680]
        cmp     esi, edi
        jz      L_295e3
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_295da
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_295da:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_295e3:
        mov     esi, dword ptr [g_007b9684]
        cmp     dword ptr [esi+4], edi
        jz      L_295fe
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+4], edi
L_295fe:
        mov     esi, dword ptr [g_007b9684]
        cmp     esi, edi
        jz      L_29618
        mov     ecx, esi
        call    FUN_00423b20
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_29618:
        mov     esi, dword ptr [g_007b9688]
        cmp     dword ptr [esi+4], edi
        jz      L_29633
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+4], edi
L_29633:
        mov     esi, dword ptr [g_007b9688]
        cmp     esi, edi
        jz      L_2964d
        mov     ecx, esi
        call    FUN_00423b30
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_2964d:
        mov     ecx, dword ptr [g_007b968c]
        push    edi
        call    FUN_00429930
        mov     ecx, dword ptr [g_007b968c]
        cmp     ecx, edi
        pop     esi
        jz      L_2966b
        push    1
        call    FUN_004296b0
L_2966b:
        mov     ecx, dword ptr [g_007b9690]
        push    edi
        call    FUN_004299b0
        mov     ecx, dword ptr [g_007b9690]
        cmp     ecx, edi
        jz      L_29688
        push    1
        call    FUN_004296e0
L_29688:
        mov     ecx, dword ptr [g_007b9678]
        cmp     ecx, edi
        jz      L_29699
        push    1
        call    FUN_00429710
L_29699:
        mov     ecx, dword ptr [g_007b967c]
        mov     dword ptr [g_007b9678], edi
        cmp     ecx, edi
        pop     edi
        jz      L_296af
        jmp     FUN_00429a40
L_296af:
        ret
    }
}
