// FUN_00540330 (252 bytes)
// __thiscall (ECX = this, stack param at ESP+0x0c = player index)
// Player weapon update function (alternate version)
__declspec(naked) void func_00540330(void)
{
    

extern void __cdecl FUN_005445c2(void);
extern void __cdecl FUN_00540448(void);
extern void __cdecl FUN_005404c3(void);
extern void __cdecl FUN_005417df(void);
extern void __cdecl FUN_005403e5(void);
extern void __cdecl FUN_00540460(void);
__asm {
push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x0c]
        mov     eax, ebx
        imul    eax, eax, 0x22ac
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [eax + esi*0x1]
        mov     al, byte ptr [edi + 0x205f34]
        test    al, al
        jz      done
        mov     eax, dword ptr [edi + 0x205d24]
        test    eax, eax
        jz      done
        push    ebx
        call FUN_005445c2
        mov     dword ptr [esp + 0x10], eax
        mov     byte ptr [edi + 0x205f35], 0x00
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      skip_weapon_init
        mov     eax, dword ptr [edi + 0x205f38]
        cmp     eax, 0x08
        jz      skip_weapon_init
        mov     ebp, dword ptr [esi + 0x50]
        mov     ebx, eax
        push    ebx
        mov     ecx, esi
        call FUN_00540448
        lea     ecx, [ebx + ebx*0x4]
        shl     ecx, 0x04
        fstp    dword ptr [ecx + ebp*0x1 + 0xfc]
        push    ebx
        mov     ecx, esi
        call FUN_005404c3
        mov     eax, dword ptr [edi + 0x205f38]
        mov     ebx, dword ptr [esp + 0x18]
        lea     edx, [eax + eax*0x4]
        shl     edx, 0x04
        fstp    dword ptr [edx + ebp*0x1 + 0x108]

skip_weapon_init:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        call FUN_005417df
        test    al, al
        setnz   cl
        mov     byte ptr [edi + 0x205f35], cl
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      done
        mov     eax, dword ptr [edi + 0x205f38]
        cmp     eax, 0x08
        jz      done
        mov     ebp, dword ptr [esi + 0x50]
        mov     ebx, eax
        push    ebx
        mov     ecx, esi
        call FUN_005403e5
        lea     edx, [ebx + ebx*0x4]
        shl     edx, 0x04
        push    ebx
        fstp    dword ptr [edx + ebp*0x1 + 0xfc]
        mov     ecx, esi
        call FUN_00540460
        mov     edi, dword ptr [edi + 0x205f38]
        lea     eax, [edi + edi*0x4]
        shl     eax, 0x04
        fstp    dword ptr [eax + ebp*0x1 + 0x108]
        mov     byte ptr [esi + 0x239df0], 0x01

done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x04
    }


}
