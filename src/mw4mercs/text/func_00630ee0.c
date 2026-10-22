/*
 * FUN_00630ee0 (137 B) — __fastcall (ECX = this), RET.
 * Calls FUN_0041fd80 on this+0x10 (and this+0x18), conditionally calls
 * FUN_00630cd0, fills a byte array at +0x15c, and invokes virtual methods
 * at vtbl+0x8 and +0x1c. Sets flags at +0x20/+0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00630cd0(void);

__declspec(naked) void __fastcall FUN_00630ee0(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebp, [esi + 0x10]
        push    edi
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_efa
        mov     ecx, esi
        call    FUN_00630cd0
l_efa:
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      l_f61
        mov     eax, dword ptr [esi + 0x24]
        xor     edi, edi
        test    eax, eax
        jle     l_f27
l_f0e:
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x15c]
        mov     byte ptr [eax + edi], 0x1
        mov     eax, dword ptr [esi + 0x24]
        inc     edi
        cmp     edi, eax
        jl      l_f0e
l_f27:
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        jz      l_f61
        push    ebx
        lea     ecx, [esi + 0x18]
        call    FUN_0041fd80
        mov     edi, eax
        mov     ebx, dword ptr [edi]
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    dword ptr [ebx + 0x8]
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
        pop     ebx
        pop     edi
        mov     byte ptr [esi + 0x20], 0x0
        mov     byte ptr [esi + 0x28], 0x1
        pop     esi
        pop     ebp
        ret
l_f61:
        pop     edi
        mov     byte ptr [esi + 0x28], 0x1
        pop     esi
        pop     ebp
        ret
    }
}
