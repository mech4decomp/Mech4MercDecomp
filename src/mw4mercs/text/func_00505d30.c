/*
 * FUN_00505D30 (30 B) — Virtual method call through vtable, stores float result
 * this(ecx), index(edi=[esp+0xc]), param(edx=[esp+8])
 * Calls this->vtable[index].method(param), stores fstp to this->array[index+1]
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00505d30(void)
{
    
__asm {
mov edx, [esp+0x08]
        push esi
        push edi
        mov edi, [esp+0x0C]
        mov esi, ecx
        mov ecx, [esi+edi*4+0x24]
        mov eax, [ecx]
        push edx
        call dword ptr [eax]
        fstp dword ptr [esi+edi*4+0x04]
        pop edi
        pop esi
        ret 0x08
    }


}
