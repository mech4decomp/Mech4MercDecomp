/*
 * FUN_0051192a (243 B) — Cleanup/destructor function
 * Called with __fastcall convention (ECX = this pointer).
 * If ZF=0 (caller's comparison was non-zero), takes fast path:
 *   computes an obfuscated function index and calls FUN_0060fe30.
 * If ZF=1, does full cleanup: frees strings "MechBay", "MechBay_main",
 *   frees 4 pointers at offsets 0x3c/0x40/0x44/0x48, sets 0x1c to -1,
 *   frees "NetLobby", "Mouse", then calls FUN_0060fe30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0051192a(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0060fe14(void);
extern void __cdecl FUN_006bbd66(void);
extern void __cdecl FUN_006bbe4c(void);
extern void __cdecl FUN_006bbd51(void);
extern void __cdecl FUN_006bbe37(void);
extern void __cdecl FUN_006bbe26(void);
extern void __cdecl FUN_006bbe13(void);
extern void __cdecl FUN_006bbe00(void);
extern void __cdecl FUN_006bbded(void);
extern void __cdecl FUN_006bbcec(void);
extern void __cdecl FUN_006bbdd1(void);
extern void __cdecl FUN_006bbcd6(void);
extern void __cdecl FUN_006bbdbc(void);
extern void __cdecl FUN_0060fd4a(void);
__asm {
push    esi
        mov     esi, ecx
        jz      cleanup_path
        ; Fast path: ZF=0 from caller
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x0C]
        xor     ecx, 0x85739531
        add     ecx, 0x0F4
        call FUN_0060fe14
        pop     esi
        pop ebx
        ret

cleanup_path:
        push    ebx
        push    0x00779894
        call FUN_006bbd66
        cmp     eax, ebx
        jz      skip_free_1
        push    eax
        call FUN_006bbe4c
skip_free_1:
        push    ebx
        push    0x00779884
        call FUN_006bbd51
        cmp     eax, ebx
        jz      skip_free_2
        push    eax
        call FUN_006bbe37
skip_free_2:
        mov     eax, dword ptr [esi + 0x3C]
        push    edi
        or      edi, 0xFFFFFFFF
        cmp     eax, ebx
        jz      skip_free_3
        push    eax
        call FUN_006bbe26
        mov     dword ptr [esi + 0x3C], ebx
        mov     dword ptr [esi + 0x1C], edi
skip_free_3:
        mov     eax, dword ptr [esi + 0x40]
        cmp     eax, ebx
        jz      skip_free_4
        push    eax
        call FUN_006bbe13
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x1C], edi
skip_free_4:
        mov     eax, dword ptr [esi + 0x44]
        cmp     eax, ebx
        jz      skip_free_5
        push    eax
        call FUN_006bbe00
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x1C], edi
skip_free_5:
        mov     eax, dword ptr [esi + 0x48]
        cmp     eax, ebx
        jz      skip_free_6
        push    eax
        call FUN_006bbded
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esi + 0x1C], edi
skip_free_6:
        push    ebx
        push    0x00779878
        call FUN_006bbcec
        cmp     eax, ebx
        pop     edi
        jz      skip_free_7
        push    eax
        call FUN_006bbdd1
skip_free_7:
        push    ebx
        push    0x00779870
        call FUN_006bbcd6
        cmp     eax, ebx
        jz      skip_free_8
        push    eax
        call FUN_006bbdbc
skip_free_8:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x0C]
        xor     ecx, 0x85739531
        add     ecx, 0x0F4
        call FUN_0060fd4a
        pop     esi
        pop     ebx
        ret
    }


}
