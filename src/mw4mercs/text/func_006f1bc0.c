/*
 * FUN_006F1BC0 (199 B) — Object constructor/initializer.
 *
 * __fastcall (ECX = this), no stack params.
 * Initializes sub-objects, calls constructors, returns 2 or 3
 * depending on whether a check succeeds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(int);
extern void __cdecl FUN_006f3960(int, int);
extern void __cdecl FUN_006f39c0(void);

__declspec(naked) int __fastcall FUN_006F1BC0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x20]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_path_b
        push    edi
        lea     edi, [esi + 0x08]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x38]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x30]
        call    FUN_0041fcb0
        push    0x40340000
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esi + 0x6c]
        call    FUN_006f3960
        lea     ecx, [esi + 0x94]
        call    FUN_006f39c0
        pop     edi
        mov     byte ptr [esi + 0x69], bl
        mov     byte ptr [esi + 0x6a], bl
        mov     byte ptr [esi + 0x68], bl
        pop     esi
        mov     eax, 3
        pop     ebx
        ret

    l_path_b:
        lea     ecx, [esi + 0x08]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x38]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x30]
        call    FUN_0041fcb0
        xor     ebx, ebx
        lea     ecx, [esi + 0x6c]
        mov     byte ptr [esi + 0x69], bl
        mov     byte ptr [esi + 0x6a], bl
        mov     byte ptr [esi + 0x68], bl
        call    FUN_006f39c0
        lea     ecx, [esi + 0x94]
        call    FUN_006f39c0
        pop     esi
        mov     eax, 2
        pop     ebx
        ret
    }
}
