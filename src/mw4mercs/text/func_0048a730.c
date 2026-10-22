/*
 * FUN_0048a730 (269 B) MLR shutdown: frees the light/geometry/texture
 * tables and slot arrays wired by FUN_0048a540.
 *
 * CFLAGS: /O1
 */

extern int g_007da784;
extern int g_007da744[];
extern int g_007da7dc;
extern int g_007da7e4;
extern int g_007da7e0;
extern int g_007da7fc;
extern void __cdecl FUN_0048b8d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0048b8c0(void);
extern void __cdecl FUN_0048b910(void);
extern void __cdecl FUN_0048b8a0(void);
extern void __cdecl FUN_0048b960(void);
extern void __cdecl FUN_0048a840(void);
extern void __cdecl FUN_0048ba50(void);
extern void __cdecl FUN_0048a870(void);
extern void __cdecl FUN_00429710(void);

__declspec(naked) void FUN_0048a730(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [g_007da784]
        mov     eax, dword ptr [esi+4]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      loc_48a753
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebx
        jz      loc_48a74e
        push    3
        call    FUN_0048b8d0
loc_48a74e:
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+4], ebx
loc_48a753:
        mov     esi, dword ptr [g_007da784]
        cmp     esi, ebx
        jz      loc_48a773
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebx
        jz      loc_48a76a
        push    3
        call    FUN_0048b8d0
loc_48a76a:
        push    esi
        call    FUN_004084e0
        add     esp, 4
loc_48a773:
        push    edi
        mov     edi, offset g_007da744
loc_48a779:
        mov     esi, dword ptr [edi]
        cmp     dword ptr [esi+4], ebx
        jz      loc_48a790
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+4], ebx
loc_48a790:
        mov     esi, dword ptr [edi]
        cmp     esi, ebx
        jz      loc_48a7a6
        mov     ecx, esi
        call    FUN_0048b8c0
        push    esi
        call    FUN_004084e0
        add     esp, 4
loc_48a7a6:
        add     edi, 4
        cmp     edi, offset g_007da784
        jl      loc_48a779
        mov     esi, dword ptr [g_007da7dc]
        cmp     dword ptr [esi+4], ebx
        pop     edi
        jz      loc_48a7cf
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebx
        jz      loc_48a7ca
        push    3
        call    FUN_0048b910
loc_48a7ca:
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+4], ebx
loc_48a7cf:
        mov     esi, dword ptr [g_007da7dc]
        cmp     esi, ebx
        jz      loc_48a7e9
        mov     ecx, esi
        call    FUN_0048b8a0
        push    esi
        call    FUN_004084e0
        add     esp, 4
loc_48a7e9:
        mov     ecx, dword ptr [g_007da7e4]
        push    ebx
        call    FUN_0048b960
        mov     ecx, dword ptr [g_007da7e4]
        cmp     ecx, ebx
        jz      loc_48a806
        push    1
        call    FUN_0048a840
loc_48a806:
        mov     ecx, dword ptr [g_007da7e0]
        push    ebx
        call    FUN_0048ba50
        mov     ecx, dword ptr [g_007da7e0]
        cmp     ecx, ebx
        jz      loc_48a823
        push    1
        call    FUN_0048a870
loc_48a823:
        mov     ecx, dword ptr [g_007da7fc]
        cmp     ecx, ebx
        jz      loc_48a834
        push    1
        call    FUN_00429710
loc_48a834:
        pop     esi
        mov     dword ptr [g_007da7fc], ebx
        pop     ebx
        ret
    }
}
