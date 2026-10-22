/*
 * FUN_005DCC10 (199 B) — Update/tick routine. If [this+0x2f9] is clear:
 * decrements a global counter, optionally logs "deadstate", sets [this+0x2f9]=1,
 * then either dispatches virtual method +0x130 (based on FUN_005DEF60 or a
 * random-time comparison), and finally forwards state to [this+0x170].
 *
 * __thiscall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0064B7D0(void *str);
extern char __stdcall FUN_005DEF60(void);
extern void *__stdcall FUN_00637B40(int v);
extern void __stdcall FUN_00637A20(void *this);
extern void __stdcall FUN_00415020(void);
extern int  __stdcall FUN_005DD280(void *a, void *b, void *c);
extern void __stdcall FUN_00652610(void *this);

__declspec(naked) void __stdcall FUN_005DCC10(void)
{
    

extern int DAT_007f24d4;
extern int DAT_0076d5ec;
__asm {
push    ecx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        push    edi
        jnz     done
        mov     al, byte ptr [esi + 0x300]
        test    al, al
        jz      L33
        dec dword ptr [DAT_007f24d4]
L33:
        mov     ecx, dword ptr [esi + 0x2e4]
        test    ecx, ecx
        jz      L47
        push    0x7884d8
        call    FUN_0064B7D0
L47:
        mov     ecx, dword ptr [esi + 0x30c]
        test    ecx, ecx
        mov     byte ptr [esi + 0x2f9], 0x1
        jz      L6D
        call    FUN_005DEF60
        cmp     al, 0x1
        jnz     LA2
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x130]
        jmp     LA2
L6D:
        push    0xfe
        call    FUN_00637B40
        mov     ecx, eax
        call    FUN_00637A20
        fmul dword ptr [DAT_0076d5ec]
        fstp    dword ptr [esp + 8]
        call    FUN_00415020
        fcomp   dword ptr [esp + 8]
        fnstsw ax
        test    ah, 0x1
        jz      LA2
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x130]
LA2:
        mov     edi, dword ptr [esi + 0x170]
        test    edi, edi
        jz      done
        call    FUN_005DD280
        test    eax, eax
        jz      done
        mov     eax, dword ptr [esi + 0x1d8]
        mov     ecx, dword ptr [esi + 0x1d4]
        mov     edx, dword ptr [edi + 0x30]
        push    eax
        push    ecx
        push    edx
        call    FUN_005DD280
        mov     ecx, eax
        call    FUN_00652610
done:
        pop     edi
        pop     esi
        pop     ecx
        ret
    }


}
