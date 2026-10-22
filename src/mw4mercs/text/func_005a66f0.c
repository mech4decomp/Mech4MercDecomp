/*
 * FUN_005a66f0 (227 B) — Constructor/initializer for a class with 4 sub-objects.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f0740(int param1, int param2, int param3, int param4);
extern void __fastcall FUN_0041fc80(void *this_sub);
extern void __stdcall FUN_005a6820(void *this, int param);

__declspec(naked) void __stdcall FUN_005a66f0(int param1, int param2, int param3, int param4)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebp
        push    edx
        mov     ecx, esi
        call    FUN_005f0740
        or      eax, 0xffffffff
        xor     ebx, ebx
        lea     edi, [esi + 0x184]
        mov     word ptr [esi + 0x17c], ax
        mov     word ptr [esi + 0x17e], bx
        push    ebx
        mov     ecx, edi
        mov     word ptr [esi + 0x180], ax
        mov     word ptr [esi + 0x182], bx
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        lea     edi, [esi + 0x18c]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        lea     edi, [esi + 0x194]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        lea     edi, [esi + 0x19c]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esi], 0x784a38
        call    FUN_005a6820
        mov eax, dword ptr [DAT_007db0ac]
        mov cx, word ptr [DAT_007db0ae]
        mov     word ptr [esi + 0x17c], ax
        pop     edi
        mov     word ptr [esi + 0x17e], cx
        mov     word ptr [esi + 0x180], ax
        mov     dword ptr [esi + 0x1a4], ebx
        mov     dword ptr [esi + 0x1a8], ebx
        mov     dword ptr [esi + 0x1b0], ebx
        mov     word ptr [esi + 0x182], cx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }


}
